#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <sys/socket.h>

#define PORT 1984
#define BACKLOG 2

int main()
{
	int sockfd, client_fd;
	size_t sin_size;
	struct sockaddr_in addr, remote_addr;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd == -1) {
		perror("error creating socket");
		exit(1);
	}
	
	addr.sin_family = AF_INET;
	addr.sin_port = htons(PORT);
	addr.sin_addr.s_addr = INADDR_ANY;
	bzero(&(addr.sin_zero), 8);
	if (bind(sockfd, (struct sockaddr *)&addr, sizeof(struct sockaddr)) == -1) {
		perror("error binding");
		exit(1);
	}
	if (listen(sockfd, BACKLOG) == -1) {
		perror("error listening");
		exit(1);
	}

	while (1) {
		sin_size = sizeof(struct sockaddr_in);
		client_fd = accept(sockfd, (struct sockaddr *)&remote_addr, &sin_size);
		if (client_fd == -1) {
			perror("error accepting");
			continue;
		}

		printf("Received a connection from %s\n", inet_ntoa(remote_addr.sin_addr));
		if (send(client_fd, "Hello, you are connected.\n", 26, 0) == -1) {
			perror("error sending");
			close(client_fd);
			exit(0);
		}
		
		close(client_fd);
	}
}
