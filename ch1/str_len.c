#include<stdio.h>

int str_len ( char string[]) {
    
    int count,i;
    count=i=0;

    while ( string[i] != '\0' ){
	    ++count;
	    i++;
    }
    
    return count;
}

int main() {

    char str[] = " Hello babith ... ";
    
    printf( "String count is : %d" , str_len(str));
    return 0;
}
