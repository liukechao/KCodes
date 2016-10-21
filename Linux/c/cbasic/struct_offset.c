#include <stdio.h>

#define offset(s, m) ((size_t)&(((s *)0)->m))

typedef struct Test {
	char c;
	int a;
	unsigned long long l;
	int b;
} T;

int main()
{
	int ta, tb;

	T test = {0, 100, 0, -100};
	T* p = &test;

	printf("offset of a in T: %x\n", offset(T, a));
	printf("offset of b in T: %x\n", offset(T, b));

	ta = *(int *)((size_t)p + offset(T, a));
	tb = *(int *)((size_t)p + offset(T, b));

	printf("T.a = %d, T.b = %d\n", ta, tb);

	return 0;
}
