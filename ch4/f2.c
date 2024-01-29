// File: otherfile.c
#include <stdio.h>

// Declaration of external variable (using the 'extern' keyword)
extern int globalVariable;

// Another function that modifies the external variable
void myFunction() {
    // Access and modify the external variable
    globalVariable *= 2;

    // Print the modified value
    printf("Inside myFunction, globalVariable = %d\n", globalVariable);
}

