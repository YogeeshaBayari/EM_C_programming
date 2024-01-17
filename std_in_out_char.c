#include<stdio.h>

int main(){

	char a =  getchar();
	char b = 'a';
	putchar(b);
	printf("\n");
	while(a != EOF){
		putchar(a);
		a = getchar();
	}
	//putchar(a);
	printf ("EOF value is  %d : ",EOF);

}
