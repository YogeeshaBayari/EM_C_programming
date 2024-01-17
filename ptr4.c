#include<stdio.h>
#include<stdlib.h>

void hello(){
	printf("hello ");
}

int* sum(int* a, int* b){
	int c = *(a)+*(b);
	printf("%d",c);
	return &c;
}




int main(){
	int a = 5;
	int b =10;
	int *ptr = sum(&a,&b);
	//printf("Sum is %d\n " ,*ptr);

	hello();
	printf("Sum is %d " , *ptr);
	return 0 ;
}
