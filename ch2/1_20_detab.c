/* Write a program detab that replaces tabs in the input with the proper number of blanks to space to
the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic
parameter */

#include <stdio.h>

#define TAB_STOP 4

int main() {
    int c, pos;

    pos = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            // Calculate the number of spaces needed to reach the next tab stop
            int spaces_to_tab_stop = TAB_STOP - (pos % TAB_STOP);

            // Output the spaces
            for (int i = 0; i < spaces_to_tab_stop; ++i) {
                putchar(' ');
                ++pos;
            }
        } else {
            putchar(c);
            if (c == '\n') {
                // Reset position to the beginning of the line after a newline
                pos = 0;
            } else {
                // Increment position for other characters
                ++pos;
            }
        }
    }

    return 0;
}
