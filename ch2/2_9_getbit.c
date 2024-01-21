/* getbits: get n bits from position p */

unsigned getbits(unsigned x, int p, int n)
{
return (x >> (p+1-n)) & ~(~0 << n);
}

/* The expression x >> (p+1-n) moves the desired field to the right end of the word. ~0 is all 1-bits;
shifting it left n positions with ~0<<n places zeros in the rightmost n bits; complementing that with ~
makes a mask with ones in the rightmost n bits */
