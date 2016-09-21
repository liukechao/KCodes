#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	FILE *file;

	file = fopen("tmp.dat", "a+");
	assert(file);
	
	fseek(file, 0, SEEK_END);
	printf("file length: %d\n", ftell(file));
	rewind(file);

	for(i = 0; i < argc; i++)
		fprintf(file, "%s\n", argv[i]);

	fclose(file);

	getchar();
	return EXIT_SUCCESS;
}
