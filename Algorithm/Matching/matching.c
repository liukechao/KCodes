#include <stdio.h>
#include <string.h>

#define MAX 1024

int find(const char* s, const char* p)
{
	int i, j;
	
	for (i = 0; i <= strlen(s) - strlen(p); i++) {
		for (j = 0; j < strlen(p); j++) {
			if (s[i + j] != p[j])
				break;
			if (j == strlen(p) - 1)
				return i;
		}
	}	
	
	return -1;		
}

int rollback_find(const char* s, const char* p)
{
	int i, j;

	i = j = 0;
	while (i <= strlen(s) - strlen(p) && j < strlen(p)) {
		if (s[i] == p[j]) {
			i++;
			j++;
		} else {
			i = i - j + 1;
			j = 0;
		}
	}
	
	if (j == strlen(p))
		return i - j;
	else
		return -1;
}

static void kmp_set_next(int next[], const char* p)
{
	int j, k;

	memset(next, 0, sizeof(int) * MAX);

	j = 0;
	k = -1;
	while (j < strlen(p) - 1) {
		if (k == -1 || p[j] == p[k]) {
			j++;
			k++;
			next[j] = k;
		} else {
			k = next[k];
		}
	}
}

int kmp_find(const char* s, const char* p)
{
	int i, j;
	int next[MAX];

	kmp_set_next(next, p);
	for (i = 0; i < strlen(p); i++)
		printf("%d\t", next[i]);
	printf("\n");

	i = j = 0;
	while (i <= strlen(s) - strlen(p) && j < strlen(p)) {
		if (s[i] == p[j] || j == -1) {
			i++;
			j++;
		} else {
			j = next[j];
		}
		printf("i = %d, j = %d\n", i, j);
	}
	
	if (j == strlen(p))
		return i - j;
	else
		return -1;
}

int bm_find(const char* s, const char* p)
{
	return 0;
}

int main(int argc, char* argv[])
{
	int (*f)(const char*, const char*);

	if (argc < 3)
		return 1;

	f = find;
	//f = rollback_find;
	//f = kmp_find;
	//f = bm_find;

	printf("Find \"%s\" in \"%s\", result: %d\n", 
			argv[2], argv[1], f(argv[1], argv[2]));
	
	return 0;
}
