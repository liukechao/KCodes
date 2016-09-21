#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int g_MaxNumberLength = 10;

// String buffers to combine two numbers
char* g_StrCombine1 = new char[g_MaxNumberLength * 2 + 1];
char* g_StrCombine2 = new char[g_MaxNumberLength * 2 + 1];

int compare(const void* strNumber1, const void* strNumber2)
{
	// [strNumber1][strNumber2]
	strcpy(g_StrCombine1, *(const char**)strNumber1);
	strcat(g_StrCombine1, *(const char**)strNumber2);
	
	// [strNumber2][strNumber1]
	strcpy(g_StrCombine2, *(const char**)strNumber2);
	strcat(g_StrCombine2, *(const char**)strNumber1);

	return strcmp(g_StrCombine1, g_StrCombine2);
}

// Given an array, print  the minimum number
// by combining all numbers in the array
void PrintMinNumber(int* numbers, int length)

{

	if(numbers == NULL || length <= 0)
		return;

	// Convert all numbers as strings
	char** strNumbers = (char**)(new int[length]);
	for(int i = 0; i < length; ++i)
	{
		strNumbers[i] = new char[g_MaxNumberLength + 1];
		sprintf(strNumbers[i], "%d", numbers[i]);
	}

	// Sort all strings according to algorithm in function compare
	qsort(strNumbers, length, sizeof(char*), compare);

	for(int i = 0; i < length; ++i)
		printf("%s", strNumbers[i]);
	printf("\n");

	for(int i = 0; i < length; ++i)
		delete[] strNumbers[i];

	delete[] strNumbers;
}

int main()
{
	int a[] = {1244, 7, 32355, 124, 77, 7, 12441};
	PrintMinNumber(a, (sizeof(a) / sizeof(a[0])));
}
