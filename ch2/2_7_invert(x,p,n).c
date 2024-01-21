/*  Write a function invert(x,p,n) that returns x with the n bits that begin at position p
inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged */

#include <stdio.h>

unsigned int invert(unsigned int x, int p, int n) {
    // Create a mask to invert the bits in x from position p to p-n+1
    unsigned int mask = ~(~0 << n) << (p - n + 1);
    
    // XOR the bits in x from position p to p-n+1 with the mask
    x = x ^ mask;

    return x;
}

int main() {
    unsigned int x = 0b1101101;
    int p = 4;
    int n = 3;

    unsigned int result = invert(x, p, n);

    printf("Original x: %u\n", x);
    printf("Inverted x: %u\n", result);

    return 0;
}
