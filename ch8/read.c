#include<stdio.h>
#include<fcntl.h>

int main ()
{
int fd = open("hi3.txt",O_RDONLY);
char buffer[100];

int  bytes =  read(fd,buffer,100);

printf( "Read %d bytes from the buffer \n %s ",bytes,buffer);

}


