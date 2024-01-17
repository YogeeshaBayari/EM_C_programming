#include<stdio.h>

int main() {
	
    char c ;

    printf("Enter the character : \n" );

    while ( ( c = getchar() ) != EOF )
	    putchar(c);

    return 0;

}
