#include<stdio.h>

int main(){

	int a =5;
	int* P = &a;

	printf( "\nValue of A : %d, Adreess : %d",a,&a);
	printf( "\nValue of A+1 : %d, Adreess : %d",a+1,&a+1);

	printf( "\nValue of P: %d, Adreess : %d",P,&P);
        printf( "\nValue of P+1 : %d, Adreess : %d",*P+1,&P+1);
        
	printf( "\nValue of P+1 : %d, Adreess : %d",P+1,&P+1);
	
	//Value of A : 5, Adreess : 611139164
	//Value of A+1 : 6, Adreess : 611139168
	//Value of P: 611139164, Adreess : 611139168
	//Value of P+1 : 6, Adreess : 611139176
	//Value of P+1 : 611139168, Adreess : 611139176

}
