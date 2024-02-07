#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char *filename = "file.txt";

    // Attempt to open a file for reading
    if ((fp = fopen(filename, "r")) == NULL) {
        // Print an error message to stderr
        fprintf(stderr, "Error: Failed to open file %s for reading\n", filename);
        
        exit(EXIT_FAILURE);
    }

    printf("File '%s' opened successfully\n", filename);

    fclose(fp);

    return 0;
}

