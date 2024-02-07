#include<stdio.h>
#include<errno.h>
#include <string.h>

extern int errno;

int main() {

    char *filename = "non_exist_file.txt";
    FILE *fp;

    printf( "Eroor outside if  no : %d\n ",errno);
    fp = fopen ( filename , "r" );

    if ( fp == NULL ) {

	perror("ERROR MESSAGE\n " );
	printf( "Eroor inside if no : %d\n ",errno);

	printf(" Error (stderror(errno)) %s \n", strerror(errno));


	fprintf(stderr , "Error Encounted \n" );
    }
    else fclose(fp);

}




    
