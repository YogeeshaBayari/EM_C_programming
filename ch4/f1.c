// File: main.c
#include <stdio.h>

// Declaration of external variable
int globalVariable;

// Function prototype
void myFunction();

int main() {
    // Initialize external variable
    globalVariable = 10;
    printf("Before calling myFunction, globalVariable = %d\n", globalVariable);

    // Call a function that uses the external variable
    myFunction();

    // Print the modified value of the external variable
    printf("After calling myFunction, globalVariable = %d\n", globalVariable);

    return 0;
}

