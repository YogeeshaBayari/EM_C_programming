#include<stdio.h>
#include<fcntl.h>
#include <unistd.h> 

int main () {

   int fd = open("hi3.txt",O_WRONLY );
   
   char buffer[100] = "Hello, world!";

   if (fd == -1) {
        perror("Error opening file");
        return 1;
   }


   int bytes = write( fd,buffer,100);

   if (bytes == -1) {
        perror("Error writing to file");
        close(fd); 
        return 1;
    }
   
   printf("NO. of Bytes written in file is : %d \n %s",bytes,buffer);

   close(fd);

}

