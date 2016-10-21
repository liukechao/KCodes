#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>

#define SERVER_PORT 1984
#define MAX_SIZE 100

int main(int argc, char **argv){
	int sockfd, recvbytes;
	char buf[MAX_SIZE];
	char *ip_addr;
	struct hostent *host;
	struct sockaddr_in serv_addr;

	ip_addr = argc < 2 ? "127.0.0.1" : argv[1];
	
	if((host = gethostbyname(ip_addr)) == NULL) {
		perror("error in gethostbyname");
		exit(1);
	}
	
	if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1){
		perror("error creating socket");
		exit(1);
	}

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(SERVER_PORT);
	serv_addr.sin_addr = *((struct in_addr *)host->h_addr);
	bzero(&(serv_addr.sin_zero), 8);

	if (connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(struct sockaddr)) == -1) {
		perror("error connecting to server");
		exit(1);
	}

	if ((recvbytes = recv(sockfd, buf, MAX_SIZE, 0)) == -1) {
		perror("error receiving data");
		exit(1);
	}		

	buf[recvbytes] = '\0';
	printf("Received: %s", buf);
	close(sockfd);
}
