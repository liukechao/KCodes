#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>

int main(int argc, char *argv[])
{
	char **pptr, str[32];
	struct hostent *host;
	
	if(argc != 2) {
		fprintf(stderr, "USAGE: %s <inet_address>\n", argv[0]);
		exit(1);
	}
	
	if((host = gethostbyname(argv[1])) == NULL) {
		fprintf(stderr, "nslookup failed on '%s'\n", argv[1]);
		exit(1);
	}
	
	for(pptr = host->h_addr_list; *pptr != NULL; pptr++)
		printf("%s\n", inet_ntop(host->h_addrtype, *pptr, str, sizeof(str)));
	
	exit(0);
}
