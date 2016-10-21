#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t pid;

	pid = fork();

	if (pid == 0)
		printf("child process, pid = %d, ppid = %d\n", getpid(), getppid());
	else
		printf("parent process, pid = %d, ppid = %d\n", getpid(), getppid());

	return 0;
}
