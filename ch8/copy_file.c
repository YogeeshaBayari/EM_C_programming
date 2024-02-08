#include<stdio.h>
#include<fcntl.h>
#include <stdarg.h>

//#include "syscalls.h"
#define SIZE 100
#define PERM 0666

#include<stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void error ( char *fmt , ... ) {
    va_list ap;

    va_start(ap,fmt);

    fprintf(stderr, "error: ");
    vfprintf(stderr, fmt,ap);
    fprintf(stderr, "\n");
    
    va_end(ap);
    exit(1);

}

int main( int argc , char *argv[] ) {

    int f1,f2,n;
    char buf[SIZE];

    if ( argc != 3 ) 
	error("Usage: cp from to");
	//printf("Error filen name");

    if ( (f1 = open( "hi3.txt",O_RDONLY)) == -1 )
	error("cp: can't open %s", argv[1]);
	//printf("Error in %s file reading\n",argv[1]);

    if( (f2 = creat( "hi2.txt",PERM)) == -1 )
	//printf ( "Error in %s file creating \n ",argv[2]);
	error("cp: can't create %s, mode %03o",argv[2], PERM);

   while ( (n = read(f1,buf,SIZE)) > 0 )
	if( write(f2,buf,n) != n )
	    //printf("Error in writing");
            error("cp: write error on file %s", argv[2]);

}   
