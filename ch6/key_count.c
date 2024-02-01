#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100
#define NKEYS   10  // Number of keywords




struct key {
    char *word;
    int count;
};

struct key keytab[NKEYS] = {
    {"auto", 0},
    {"break", 0},
    {"case", 0},
    {"char", 0},
    {"const", 0},
    {"continue", 0},
    {"default", 0},
    {"unsigned", 0},
    {"void", 0},
    {"volatile", 0},
};

int getword(char *, int);
int binsearch(char *, struct key *, int);

int main() {
    int n;
    char word[MAXWORD];

    while (getword(word, MAXWORD) != EOF) {
        if (isalpha(word[0])) {
            if ((n = binsearch(word, keytab, NKEYS)) >= 0) {
                keytab[n].count++;
            }
        }
    }

    for (n = 0; n < NKEYS; n++) {
        if (keytab[n].count > 0) {
            printf("%4d %s\n", keytab[n].count, keytab[n].word);
        }
    }

    return 0;
}



int binsearch(char *word, struct key *tab, int n) {
    int cond;
    int low, high, mid;
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if ((cond = strcmp(word, tab[mid].word)) < 0)
            high = mid - 1;
        else if (cond > 0)
            low = mid + 1;
        else
            return mid;
    }

    return -1;
}

int getword(char *word, int lim) {
    int c;
    char *w = word;

    // Skip leading whitespace
    while (isspace(c = getchar()))
        ;

    // Read the word characters
    for (; lim > 0 && !isspace(c) && c != EOF; lim--, w++) {
        *w = c;
	
        c = getchar();
	

	printf("________________");
    }
	printf("\n");
    *w = '\0'; // Null-terminate the word

    return c; // Return the last character read
}

