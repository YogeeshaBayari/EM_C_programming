#include <stdio.h>

int main() {
	char currentChar, previousChar;
	previousChar = getchar();
	
	if (previousChar != EOF) {
	printf("\n*");
		putchar(previousChar);
	}

	while ((currentChar = getchar()) != EOF) {

		if (currentChar == ' ' && previousChar == ' ') {
           		 continue; 
        	}
        	printf("\n*@");
		putchar(currentChar);
		previousChar = currentChar;
	}	

	return 0;
}
