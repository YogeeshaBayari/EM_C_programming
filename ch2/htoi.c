#include <stdio.h>
#include <ctype.h>

int htoi(const char *s) {
    int result = 0;

    // Skip optional '0x' or '0X'
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        s += 2;
    }

    // Process each character in the string
    while (*s != '\0') {
        char currentChar = *s;
        int digitValue;

        // Convert hex digit to decimal value
        if (isdigit(currentChar)) {
            digitValue = currentChar - '0';
        } else if (isalpha(currentChar)) {
            digitValue = tolower(currentChar) - 'a' + 10;
        } else {
            // Invalid character in the hex string
            return -1;  // You can choose an appropriate error code
        }

        // Update the result based on the current digit
        result = result * 16 + digitValue;

        // Move to the next character
        s++;
    }

    return result;
}

int main() {
    // Example usage:
    const char *hexString1 = "1a";   // Hexadecimal for 26 in decimal
    const char *hexString2 = "0xFF"; // Hexadecimal for 255 in decimal

    int result1 = htoi(hexString1);
    int result2 = htoi(hexString2);

    printf("Result 1: %d\n", result1); // Should print 26
    printf("Result 2: %d\n", result2); // Should print 255

    return 0;
}
