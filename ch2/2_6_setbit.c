/* Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position
p set to the rightmost n bits of y, leaving the other bits unchanged. */

#include <stdio.h>

unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
    // Create a mask to clear the bits in x from position p to p-n+1
    unsigned int mask = ~(~0 << n) << (p - n + 1);
    
    // Clear the bits in x from position p to p-n+1
    x = x & ~mask;
    
    // Extract the rightmost n bits from y and position them at p
    unsigned int bits_from_y = (y & ~(~0 << n)) << (p - n + 1);
    
    // Combine the modified x and bits from y
    return x | bits_from_y;
}

int main() {
    unsigned int x = 0b1000;
    unsigned int y = 0b111;
    int p = 1;
    int n = 2;

    unsigned int result = setbits(x, p, n, y);

    printf("Original x: %u\n", x);
    printf("Modified x: %u\n", result);

    return 0;
}
