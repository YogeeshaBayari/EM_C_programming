#include<stdio.h>

#define name "Yogeesh"
#define SQUARE(X) X+X

int main(){

    char name1[] = name;

    printf(" Name : %s\n ",name);

    int sum = 10 * SQUARE(5);
	
    printf("Sum is : %d\n ",sum);



   const int a = 5;
   int b = 6;

   if( a == 5 ){
	const b = 10;
	const a = 15 ;
	printf(" A  value inside if block : %d \n " , a);
	printf(" B  value inside if block : %d \n " , b);   
   }
   printf(" A  value outside if block : %d \n " , a);
   printf(" B  value outside if block : %d \n " , b);

    return 0;
}
