/* squeeze: delete all c from s | squeeze(s,c) which removes all occurrences of the character c from the string s.*/
  
void squeeze(char s[], int c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
      {
        if (s[i] != c)
        s[j++] = s[i];
      }
    s[j] = '\0';
}

/* alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2. */

#include <stdio.h>

void squeeze(char s1[], const char s2[]) {
    int i, j, k;

    for (i = k = 0; s1[i] != '\0'; i++) {
        int match = 0;

        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                match = 1;
                break;
            }
        }

        if (!match) {
            s1[k++] = s1[i];
        }
    }

    s1[k] = '\0';
}

int main() {
    char s1[] = "Hello, World!";
    const char s2[] = "aeiou";

    printf("Before: %s\n", s1);
    squeeze(s1, s2);
    printf("After: %s\n", s1);

    return 0;
}
