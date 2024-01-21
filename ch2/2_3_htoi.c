#include <stdio.h>
#include <ctype.h>

int htoi(const char s[]) {
    int result = 0;
    int i = 0;

    // Handle optional '0x' or '0X' prefix
    if (s[i] == '0' && (s[i + 1] == 'x' || s[i + 1] == 'X')) {
        i += 2;
    }

    // Convert hexadecimal digits to decimal
    while (s[i] != '\0') {
        int digitValue;

        if (isdigit(s[i])) {
            digitValue = s[i] - '0';
        } else if (isxdigit(s[i])) {
            digitValue = tolower(s[i]) - 'a' + 10;
        } else {
            // Invalid character encountered
            return -1;
        }

        result = result * 16 + digitValue;
        i++;
    }

    return result;
}

int main() {
    const char hexString1[] = "1a";  // 26
    const char hexString2[] = "0x2F";  // 47

    printf("Decimal value of %s: %d\n", hexString1, htoi(hexString1));
    printf("Decimal value of %s: %d\n", hexString2, htoi(hexString2));

    return 0;
}
