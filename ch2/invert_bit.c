#include<stdio.h>

void invert(unsigned int x, int p , int n ) {

    unsigned int mask = ~(~0 << n ) << ( (p+1) - n );

    printf( "Inverted : %u ", x^mask);

}

int main() {

    unsigned int x = 16;
    int postion = 1;
    int no_of_element = 1 ;

    invert(x,postion,no_of_element);

}
