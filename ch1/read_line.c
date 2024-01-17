#include<stdio.h>

int main() {
 
    int buffer[100];

    printf("Enter the line of text\n");
    
    if ( fgets ( buffer , sizeof(buffer) , stdin ) != NULL )

	printf("Line is :%s",buffer);

    return 0 ;

}

