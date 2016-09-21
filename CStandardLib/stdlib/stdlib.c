#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 256

/*
 * Get and set environments
 */
void environment(char *argv, char **environ)
{
	int i;

	printf("Environments value you asked:\n");
	printf("%s = %s\n", argv, getenv(argv));

	printf("Environments passed to the program:\n");
	for (i = 0; environ[i]; i++)
		printf("%d. %s\n", i + 1, environ[i]);

	/*
	 * Set Environment
	 */
	printf("Set Environment: NAME=Allen\n");
	if (putenv("NAME=Allen"))
		perror("Error setting environment");
	
	printf("Result: getenv(\"NAME\") = %s\n", getenv("NAME"));
}

/*
 * Exit handlers
 */
void atexit_handler(void)
{
	printf("atexit handler called.\n");
	
	getchar();
}

void on_exit_handler(int status, void *arg)
{
	printf("on_exit handler called, with status = %d, arg = %s\n", status, arg);
	
	getchar();
}

void set_exit_handler()
{
	if (atexit(atexit_handler) != 0) {
		fprintf(stderr, "error setting atexit handler.\n");
		abort();
	}

/* Cannot use in VC */
//	if (on_exit(on_exit_handler, "on_exit") != 0) {
//		fprintf(stderr, "error setting on_exit handler.\n");
//		abort();
//	}

/* Not standard c lib */
//#include <unistd.h>
//	_exit(EXIT_FAILURE);
}

/* Memory allocations */
void memory()
{
	int size;
	char *p, *q;
	int *ip;
	char msg[] = {'h', 'e', 'l', 'l', 'o'};

	/* malloc */
	p = (char *)malloc(MAX_SIZE + 1);
	if (p == NULL) {
		perror("Error malloc memory");
		exit(EXIT_FAILURE);
	}
	printf("malloc() returned address: %8x\n", p);
	size = sizeof(msg) / sizeof(msg[0]);
	memcpy(p, msg, size);
	p[size] = '\0';
	printf("%s\n", p);

	/* realloc */
	/* realloc(NULL, newsize) equals malloc(newsize) */
	/* realloc(ptr, 0) equals free(ptr) */
	q = (char *)realloc(p, MAX_SIZE * 2 + 1);
	if (q == NULL)
		perror("Error realloc memory");
	else
		p = q;
	printf("realloc() returned ddress: %8x\n", p);
	printf("%s\n", p);

	/* calloc */
	/* only calloc set memory to 0 */
	ip = (int *)calloc(MAX_SIZE, sizeof(int));
	if (ip == NULL) {
		perror("Error calloc memory");
		exit(EXIT_FAILURE);
	}
	printf("calloc() returned address: %8x\n", ip);

	free(p);
	free(ip);
}

int main(int argc, char **argv, char **environ)
{
	int choice = 1;
	char buf[MAX_SIZE];
	
	printf("Choose what to do: \n");
	printf("1.Environments\n");
	printf("2.Execute a Command\n");
	printf("3.Memory Allocation\n");

	scanf("%d", &choice);
	switch(choice) {
	case 1:
		printf("Input an env: ");
		scanf("%s", buf);
		environment(buf, environ);
		break;
	case 2:
		printf("Input a command: ");
		scanf("%s", buf);
		system(buf);
		break;
	case 3:
		printf("Memory Allocation:\n");
		memory();
		break;
	default:
		fprintf(stderr, "Wrong choice: %d\n", choice);
	}
	
	set_exit_handler();
	
	//abort();
	//exit(EXIT_FAILURE);
	getchar();
	exit(EXIT_SUCCESS);
	//return EXIT_SUCCESS;
}
