#include <stdio.h>
#define N1 '\010'
#define N2 '\x10'

int main() {
    printf(" \'\\010' in decimal : %d",N1);
    printf( "\n  \'\\x10' in decimal : %d",N2);
    return 0;
}

