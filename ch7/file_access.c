#include<stdio.h>

int main() {

FILE *f = fopen ("hi.txt","w");


//char c = getc(f);
//putc('j',f);

//char c = getchar();
//putchar(c);

char c = getc(stdin);
putc(c , stdout);

}
