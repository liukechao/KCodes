#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>

int status;
jmp_buf env;

void process(int flag)
{
	if(flag)
		longjmp(env, flag);
}

void handle_exit()
{
	printf("status: %d\n", status);
	
	getchar();
}

int main(int argc, char **argv)
{
	atexit(handle_exit);

	status = setjmp(env);
	if(status != 0)
		return status;
	process(argc);
	
	return status;	
}
