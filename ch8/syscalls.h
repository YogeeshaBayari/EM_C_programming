#include<stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void error ( char *fmt , ... ) {
    va_list ap;

    va_start(ap,fmt);

    fprintf(stderr, "error: ");
    vprintf(stderr, fmt);
    fprintf(stderr, "\n");
    
    va_end(ap);
    exit(1);

}
