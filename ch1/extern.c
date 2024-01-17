#include <stdio.h>

extern int a;
extern int b;

void sum() {

    printf("Sum: %d\n", a + b);
}

int main() {
    
    int a = 10;
    int b = 20;
    sum();

    return 0;
}

int a = 6;
int b = 5;

