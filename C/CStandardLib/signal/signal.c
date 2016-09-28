#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void handler(int signum)
{
	printf("signal number: %d\n", signum);
	
	getchar();
	exit(signum);
}

int main(int argc, char **argv)
{
	signal(SIGSEGV, handler);

	putchar(argv[1][1]);
	
	return EXIT_SUCCESS; 
}
