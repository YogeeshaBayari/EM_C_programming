#include <stdio.h>
#include <stdlib.h> 

void filecopy(FILE *a, FILE *b) {
    int c;
    while ((c = getc(a)) != EOF)
        putc(c, b);
}

int main(int argc, char *argv[]) {
    FILE *fp;
    char *prog = argv[0];
    if (argc == 1)
        filecopy(stdin, stdout);
    else
        while (--argc > 0) {
            if ((fp = fopen(*++argv, "r")) == NULL) {
                fprintf(stderr, "%s: can't open %s\n", argv[0], *argv);
                exit(1);
            } else {
                filecopy(fp, stdout);
                fclose(fp);
            }
        }
    if (ferror(stdout)) {
	fprintf(stderr, "%s: error writing stdout\n", prog);
	exit(2);
   }
    return 0;
}

