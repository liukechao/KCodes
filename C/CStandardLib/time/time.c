#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	time_t t;
	
	t = time(NULL);
	printf("Time: %s\n", ctime(&t));

	getchar();
	return EXIT_SUCCESS;
}
