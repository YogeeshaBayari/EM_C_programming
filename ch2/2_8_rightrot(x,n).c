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

//======================================================================================
///second method


#include <stdio.h>

unsigned right_rot(unsigned x, int n, int size) {
    n = n % size;
    return (( x >> n) | (x << (size - n) ))& ((1u << size) - 1);
}

int main() {
    unsigned x;
    int n, size;

    // Input values from the user
    printf("Enter the value (x): ");
    scanf("%u", &x);

    printf("Enter the number of bits to rotate (n): ");
    scanf("%d", &n);

    printf("Enter the size of the data type in bits: ");
    scanf("%d", &size);

    // Check for invalid size input
    if (size <= 0 || size > sizeof(unsigned) * 8) {
        printf("Invalid size input. Size should be between 1 and %lu.\n", sizeof(unsigned) * 8);
        return 1; // Exit with an error code
    }

    printf("After Rotation: %u\n", right_rot(x, n, size));
    return 0;
}
