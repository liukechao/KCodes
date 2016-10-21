#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int copy(char* input)
{
	char var[20];
	strcpy (var, input);
	return 0;
}

int hacked(void)
{
	printf("stack overflow\n");
	exit(0);
}

int main(int argc, char* argv[])
{
	char hackstr[] = "abcdefghijklmnopqrstuvwxyz1234567890";
	int *eip = (int*)&hackstr[24];	//20->23.EBP
	*eip = (int)hacked;
	
	copy(hackstr);

	printf("this cannot be seen\n");

	return 0;
}

