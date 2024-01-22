/*  Write a program to copy its input to its output, replacing each string of one or more blanks by a
single blank */

#include <stdio.h>

int main() {
    int currentChar, previousChar;

    // Initialize previousChar to a non-blank character
    previousChar = getchar();

    // Copy input to output
    while ((currentChar = getchar()) != EOF) {
        if (!(previousChar == ' ' && currentChar == ' ')) {
            // Print only if it's not a sequence of consecutive blanks
            putchar(previousChar);
        }

        // Update previousChar for the next iteration
        previousChar = currentChar;
    }

    return 0;
}
