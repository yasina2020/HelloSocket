#include "Client.h"



SOCKET StartClient() {
	SOCKET cfd = socket(AF_INET, SOCK_STREAM, 0);

	struct sockaddr_in saddr;
	memset(&saddr, 0, sizeof(saddr));
	inet_pton(AF_INET, "127.0.0.1", &saddr.sin_addr.s_addr);
	saddr.sin_port = htons(2222);
	connect(cfd, (struct sockaddr*)&saddr, sizeof(saddr));

	return cfd;
}