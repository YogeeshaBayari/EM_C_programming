#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdarg.h> // Include stdarg.h for va_list, va_start, va_end

void error(char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    fprintf(stderr, "error: ");
    vfprintf(stderr, fmt, ap); // Use vfprintf to print formatted output using va_list
    fprintf(stderr, "\n");

    va_end(ap);
    exit(1);
}

#define SIZE 100
#define PERM 0666

int main(int argc, char *argv[]) { // Fix the function signature for main

    int f1, f2, n;
    char buf[SIZE];

    if (argc != 3) 
        error("Usage: cp from to");

    if ((f1 = open(argv[1], O_RDONLY)) == -1)
        error("cp: can't open %s", argv[1]);

    if ((f2 = creat(argv[2], PERM)) == -1)
        error("cp: can't create %s, mode %03o", argv[2], PERM);

    while ((n = read(f1, buf, SIZE)) > 0)
        if (write(f2, buf, n) != n)
            error("cp: write error on file %s", argv[2]);

    return 0; // Return success status
}

