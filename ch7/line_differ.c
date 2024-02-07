#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    FILE *file1 = fopen(argv[1], "r");
    if (file1 == NULL) {
        perror(argv[1]);
        return 1;
    }

    FILE *file2 = fopen(argv[2], "r");
    if (file2 == NULL) {
        perror(argv[2]);
        fclose(file1);
        return 1;
    }

    char line1[100];
    char line2[100];
    int linenum = 0;

    while (fgets(line1, sizeof(line1), file1) != NULL && fgets(line2, sizeof(line2), file2) != NULL) {
        linenum++;
        if (strcmp(line1, line2) != 0) {
            printf("Files differ at line %d\n", linenum);
            printf("%s: %s", argv[1], line1);
            printf("%s: %s", argv[2], line2);
            fclose(file1);
            fclose(file2);
            return 0;
        }
    }

    if (fgets(line1, sizeof(line1), file1) != NULL) {
        printf("%s is longer than %s\n", argv[1], argv[2]);
    } else if (fgets(line2, sizeof(line2), file2) != NULL) {
        printf("%s is longer than %s\n", argv[2], argv[1]);
    } else {
        printf("Files are identical\n");
    }

    fclose(file1);
    fclose(file2);
    return 0;
}

