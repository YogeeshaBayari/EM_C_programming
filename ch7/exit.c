#include <stdlib.h>
#include<stdio.h>


void func() { 

    printf("EXIT_SUCCESS : %d \n ",EXIT_SUCCESS );

    exit(0);

    printf( " C program ");

}

int main () {

    printf("EXIT_FAILURE : %d \n ",EXIT_FAILURE );
    
    func();

    exit(0);

    printf("hello");

    return 0;

}
