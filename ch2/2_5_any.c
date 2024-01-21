/* which returns the first location in a string s1 
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.  */

#include <stdio.h>

int any(const char s1[], const char s2[]) {
    int i, j;

    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                return i; // Found a match, return the index
            }
        }
    }

    return -1; // No match found
}

int main() {
    const char s1[] = "Hello, World!";
    const char s2[] = "aeiou";

    int result = any(s1, s2);

    if (result != -1) {
        printf("First match found at index: %d\n", result);
    } else {
        printf("No match found.\n");
    }

    return 0;
}
