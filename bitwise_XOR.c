#include<stdio.h>
int main(){
	int a = 4 , b=3;
	printf(" A : %d B : %d ",a,b);
	a=a^b;
	b=a^b;
	a=a^b;

	printf("\n A : %d B : %d ",a,b);

}
