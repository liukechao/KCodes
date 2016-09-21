#include <stdio.h>
#include <string.h>

#define MAX 10

int compare(int a, int b)
{
	int alen, blen, len, result;
	char astr[MAX], bstr[MAX];

	sprintf(astr, "%d", a);
	sprintf(bstr, "%d", b);

	alen = strlen(astr);
	blen = strlen(bstr);
	len = alen <= blen ? alen : blen;

	result = strncmp(astr, bstr, len);
	if (result || alen == blen)
		return result;
	
	if (alen > blen)
		return compare(atoi(astr + len), b);
	else
		return compare(a, atoi(bstr + len));
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void ArrayToMinNumber(int array[], int length)
{
	int i, j;
	    
	for (i = 0; i < length - 1; i++)
		for (j = i + 1; j < length; j++)
			if (compare(array[i], array[j]) > 0)
				swap(array + i, array + j);

}

int main()
{
	int i, len;
	int a[] = {1244, 7, 32355, 124, 77, 7, 12441};

	len = sizeof(a) / sizeof(a[0]);

	for(i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");

	ArrayToMinNumber(a, len);

	for(i = 0; i < len; i++)
		printf("%d", a[i]);
	printf("\n");

	getchar();
	return 0;
}
