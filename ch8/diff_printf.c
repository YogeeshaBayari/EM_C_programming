#include <stdio.h>
#include <stdarg.h> // Required for va_list, va_start, va_end

void printFormatted(const char *format, ...) {
    va_list args;
    va_start(args, format); // Initialize the va_list with the first argument

    vprintf(format, args); // Use vprintf to print formatted output using the va_list

    va_end(args); // Clean up the va_list
}

int main() {
    // Example data
    int num = 10;
    double pi = 3.14159;
    char str[] = "Hello, World!";

    // Using printf
    printf("Using printf:\n");
    printf("Integer: %d\n", num);
    printf("Double: %f\n", pi);
    printf("String: %s\n", str);

    // Using our custom function with vprintf
    printf("\nUsing our custom function with vprintf:\n");
    printFormatted("Integer: %d\n", num);
    printFormatted("Double: %f\n", pi);
    printFormatted("String: %s\n", str);

    // Using fprintf to print to a file
    FILE *fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Using fprintf: Integer: %d, Double: %f, String: %s\n", num, pi, str);
    fclose(fp);

    // Using sprintf to format data into a string
    char buffer[100]; // Allocate a buffer to store the formatted string
    sprintf(buffer, "Using sprintf: Integer: %d, Double: %f, String: %s", num, pi, str);
    printf("\n%s\n", buffer);

    return 0;
}

