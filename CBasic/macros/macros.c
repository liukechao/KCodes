#include <stdio.h>

int main()
{
	printf("%s, %d\n", __FILE__, __LINE__);
	printf("%s, %s\n", __DATE__, __TIME__);

	system("pause");

	return 0;
}
