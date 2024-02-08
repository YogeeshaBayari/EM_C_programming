#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>
int main(int argc , char *argv[]) {

    int fd;
    char buf[100];
    int offset ;

    fd = open(argv[1] , O_RDONLY);

    
    offset = lseek(fd, 0, SEEK_SET);

    printf("Offset %d :",offset);

    offset = lseek(fd, 1, SEEK_CUR);

    if(offset >= 0)
	read(fd,buf,100);

    printf("BUFFER : %s " ,buf);

    
}

