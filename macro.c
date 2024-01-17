#include<stdio.h>

#define swap(t,a,b) {t temp = a;a=b;b=temp; }
int main(){

	int a=10;
	int b=12;
	printf("BEfore : %d %d",a,b);
	swap(int,a,b);

	printf("\nAfter : %d %d",a,b);

}
