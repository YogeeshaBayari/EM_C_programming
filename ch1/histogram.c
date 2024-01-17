#include<stdio.h>
#include<ctype.h>

#define max_size_array 10


void print(int a[]) {

    printf("\n");
    
    for (int i = 0; i < max_size_array; i++) {
	printf(" %d | ", i);	

        for (int j = 0; j < a[i]; j++) {
            printf("#");
        }

        printf("\n");
    }
}

int main() {
    char c;
    int word_length = 0;
    int word_size[max_size_array] = {0};
    int index = 0;

    while ((c = getchar()) != EOF) {
    
        if (c == ' ' || c == '\n' || c == '\t') {
        
            if (word_length > 0) {
                word_size[index] = word_length;
                index++;
            }
            word_length = 0; 
        } 
   
        else if (isalpha(c)) {
        
		word_length++;
        }
    }

    print(word_size);
    return 0;
}

