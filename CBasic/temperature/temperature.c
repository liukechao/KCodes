#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/*
 * fahrenheit to celsuis
 */
float f2c(float f)
{
	return 5.0 / 9.0 * (f - 32);
}

int main()
{
	float f;

	printf("fahrenheit to celsuis test\n");
	
	for(f = LOWER ; f <= UPPER; f += STEP)
		printf("%3.0f\t%6.1f\n", f, f2c(f));

	system("pause");
	return EXIT_SUCCESS;
}
