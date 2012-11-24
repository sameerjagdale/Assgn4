/*
 * socket.h
 *
 *  Created on: Nov 23, 2012
 *      Author: sameer
 */

#ifndef SOCKET_H_
#define SOCKET_H_



#endif /* SOCKET_H_ */

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include<strings.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include<unistd.h>

int Create();
int Bind(int port, int sockfd);
int listen(int sockfd, int queue);
int Accept(int sockfd);
int Connect(char* address, int port, int sockfd);
int Receive(int sockfd, char *buff, int buffSize);
int Send(int sockfd, const char *buffer, int len);
int Close(int sockfd);
