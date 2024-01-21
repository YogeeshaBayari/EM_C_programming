/* Write a function rightrot(x,n) that returns the value of the integer x rotated to the
right by n positions. */

#include<stdio.h>

int right_rot ( unsigned x , int n ) {

    int size = sizeof(unsigned) * 8 ;

    n = n % size;

    return ( x >> n | x << (size - n ));

}

int main() {

    printf ("After Rotation : %u ", right_rot(5,1));
    return 0 ;
}
