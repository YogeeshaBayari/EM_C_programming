#include <stdio.h>
#include <string.h>

void countDuplicateChars(char str[]) {
    int count[256] = {0}; // Assuming ASCII characters
    
 
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

   
    printf("Duplicate characters in the string:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", i, count[i]);
        }
    }
}

int main() {
    char inputString[100];

    
    printf("Enter a string: ");
    scanf("%[^\n]", inputString);

   
    countDuplicateChars(inputString);

    return 0;
}
