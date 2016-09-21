#include "sorting.h"

static void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

static int lmin(int a, int b)
{
	return (a < b)? a: b;
}

static int lmax(int a, int b)
{
	return (a > b)? a: b;
}

void init_list(int *list)
{
	int i;
	
	srand(time(NULL));

	for (i = 0; i < LENGTH; i++)
		list[i] = rand() % (10 * LENGTH);

	printf("\nInitial List:\n");
	display_list(list);
}

void copy_list(int *dest, const int *src)
{
	memcpy(dest, src, sizeof(int) * LENGTH);
}

void display_list(const int *list)
{
#ifdef LDEBUG
	int i;
	
	for (i = 0; i < LENGTH; i++) {
		printf("%5d\t", list[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
#else
	printf("......\n");
#endif
}

int check_list_sorted(const int *list)
{
	int i;
	for (i = 1; i < LENGTH; i++)
		if (list[i - 1] > list[i])
			return 0;
	return 1;
}

/* Selection Sort, O(n*n), O(1), Unstable */
void selection_sort(int *list)
{
	int i, j;
	
	printf("\nSelection Sort:\n");
	for (i = 0; i < LENGTH - 1; i++) 
		for (j = i + 1; j < LENGTH; j++)
			if (list[i] > list[j])
				swap(list + i, list + j);
}

/* Bubble Sort, O(n*n), O(1), Stable */
void bubble_sort_sinking(int *list)
{
	int i, bottom;
	int flag;

	printf("\nBubble Sort Sinking:\n");
	bottom = LENGTH - 1;
	do {
		flag = 0;
		for (i = 0; i < bottom; i++)
			if (list[i] > list[i + 1]) {
				swap(list + i, list + i + 1);
				flag = 1;
			}
		bottom--;
	} while (flag && bottom > 0);
}
void bubble_sort_rising(int *list)
{
	int i, top;
	int flag;

	printf("\nBubble Sort Rising:\n");
	top = 0;
	do {
		flag = 0;
		for (i = LENGTH - 1; i > top; i--)
			if (list[i] < list[i - 1]) {
				swap(list + i, list + i - 1);
				flag = 1;
			}
		top++;
	} while (flag && top < LENGTH - 1);
}
void bubble_sort_bidirectional(int *list)
{
	int i, top, bottom;
	int direction, flag;

	printf("\nBubble Sort Bidirectional:\n");
	top = 0;
	bottom = LENGTH - 1;
	direction = 1;
	do {
		flag = 0;
		if (direction) {
			for (i = top; i < bottom; i++)
				if (list[i] > list[i + 1]) {
					swap(list + i, list + i + 1);
					flag = 1;
				}
			bottom--;
		} else {
			for (i = bottom; i > top; i--)
				if (list[i] < list[i - 1]) {
					swap(list + i, list + i - 1);
					flag = 1;
				}
			top++;
		}
		direction = 1 - direction;
	} while (flag && top < bottom);
}

/* Linear Insertion Sort, O(n*n), O(1), Stable */
void insertion_sort_linear(int *list)
{
	int i, j;
	int temp;
	
	printf("\nLinear Insertion Sort:\n");
	for (i = 1; i < LENGTH; i++) {
		temp = list[i];
		j = i;
		while (j > 0 && temp < list[j - 1]) {
			list[j] = list[j - 1];
			j--;
		}
		list[j] = temp;
	}
}
void insertion_sort_binary(int *list)
{
	int i, j;
	int left, right, middle;
	int temp;

	printf("\nBinary Insertion Sort:\n");
	for (i = 1; i < LENGTH; i++) {
		temp = list[i];
		left = 0;
		right = i - 1;
		while (left <= right) {
			middle = (left + right) / 2;
			if (temp < list[middle])
				right = middle - 1;
			else
				left = middle + 1;
		}
		for (j = i - 1; j >= left; j--)
			list[j + 1] = list[j];
		list[left] = temp;
	}
}

/* Merge Sort, O(nlogn), O(n), Stable */
static void merge(int *list, int p, int q, int r)
{
	int i;
	int *temp;
	int begin1, end1;
	int begin2, end2;
	
	i = 0;
	begin1 = p; end1 = q;
	begin2 = q + 1; end2 = r;
	temp = (int *)malloc((r - p + 1) * sizeof(int));

	if (!temp)
		perror("malloc");
	
	while (begin1 <= end1 && begin2 <= end2) {
		if (list[begin1] <= list[begin2])
			temp[i++] = list[begin1++];
		else
			temp[i++] = list[begin2++];
	}
	
	while (begin1 <= end1)
			temp[i++] = list[begin1++];
	while (begin2 <= end2)
			temp[i++] = list[begin2++];
	
	for (i = 0; i < r - p + 1; i++)
		list[p + i] = temp[i];

	free(temp);
}

static void _merge_sort_recursive(int *list, int first, int last)
{
	int mid = 0;
	if (first < last) {
		mid = (first + last) / 2;
		_merge_sort_recursive(list, first, mid);
		_merge_sort_recursive(list, mid + 1, last);
		merge(list, first, mid, last);
	}
}

void merge_sort_recursive(int *list)
{
	printf("\nRecursive Merge Sort:\n");
	_merge_sort_recursive(list, 0, LENGTH - 1);
}

void merge_sort_non_recursive(int *list) 
{
	printf("\nNon-Recursive Merge Sort:\n");
	printf("Not Implemented.\n");
}

/* Quick Sort, O(nlogn), O(n), Unstable */
static int partition(int *list, int first, int last)
{
	int left, right;
	int pivot;

	left = first;
	right = last;
	pivot = list[left];

	do {
		while (list[right] >= pivot && left < right)
			right--;
		if (right != left) {
			list[left++] = list[right];
			while (list[left] <= pivot && left < right)
				left++;
			if (left != right)
				list[right--] = list[left];
		}
	} while (left < right);
	list[left] = pivot;
	return left;
}

static void _quick_sort_recursive(int *list, int first, int last)
{
	int pos;

	if (first < last) {
		pos = partition(list, first, last);
		_quick_sort_recursive(list, first, pos - 1);
		_quick_sort_recursive(list, pos + 1, last);
	}
}

void quick_sort_recursive(int *list)
{
	printf("\nRecursive Quick Sort:\n");
	_quick_sort_recursive(list, 0, LENGTH - 1);
}

void quick_sort_non_recursive(int *list) 
{
	printf("\nNon-Recursive Quick Sort:\n");
	printf("Not Implemented.\n");
}

/* Heap Sort, O(nlogn), O(1), Unstable */
static void shift_down(int *list, int current, int last)
{
	int i, j;
	int temp;

	i = 2 * current + 1;
	j = current;
	temp = list[j];
	while (i <= last) {
		if (i < last)
			if (list[i] < list[i+1])
				i++;
		if (temp < list[i]) {
			list[j] = list[i];
			j = i;
			i = 2 * j + 1;
		} else {
			break;
		}
	}
	list[j] = temp;
}

static void build_heap(int *list)
{
	int i;
	for (i = LENGTH / 2 - 1; i >=0; i--)
		shift_down(list, i, LENGTH - 1);
}

void heap_sort(int *list)
{
	int last;

	printf("\nHeap Sort:\n");
	build_heap(list);
	for (last = LENGTH - 1; last > 0; last--) {
		shift_down(list, 0, last);
		swap(list + 0, list + last);
	}
}

/* Heap Sort, O(n(logn)*(logn)), O(1), Unstable */
void shell_sort(int *list)
{
	int i, j;
	int distance;
	int temp;

	printf("\nShell Sort:\n");
	distance = LENGTH / 2;
	while (distance > 0) {
		for (i = distance; i < LENGTH; i++) {
			j = i - distance;
			temp = list[i];
			while (j >= 0 && list[j] > temp) {
				list[j + distance] = list[j];
				j -= distance;
			}
			list[j + distance] = temp;
		}
		distance /= 2;
	}
}

/* Radix Sort, O(tn), O(n), Stable */
void radix_sort(int *list)
{
	printf("\nRadix Sort:\n");
	printf("Not Implemented.\n");
}

/* Hash Sort, O(n), O(n), Stable */
void hash_sort(int *list)
{
	printf("\nHash Sort:\n");
	printf("Not Implemented.\n");
}

/* Test Sort, all kinds of sorting algorithms */
void test_sort(int *list)
{
	int i, j;

	printf("\nTest Sort:\n");
	/* linear sort */
	for (i = 0; i < LENGTH - 1; i++)
		for (j = i + 1; j < LENGTH; j++)
			if (list[i] > list[j])
				swap(list + i, list + j);
}	
