/*
 * server.c
 *
 *  Created on: Jul 9, 2015
 *      Author: TT112S-04
 */
# define MSG_BUF 100
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
main()
{
FILE *file1;
int fifo_server,fifo_client;
int choice;
char buf[MSG_BUF];
//memset(buf, '\0', sizeof(buf));
int fd;
fd = open (" fifo_server" , O_WRONLY );
/* write into the named - pipe */

strcpy(buf,"Hello");
write (fd ,buf , strlen(buf));
printf("11111%s ",buf);

}
