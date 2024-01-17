#include<stdio.h>
int main(){

	int a =5;
	int* p = &a;

	int **q = &p;

	int***r =&q ;

	printf("A : %d\n ",a); // 5
        printf("p : %d\n ",p); // ad of a 
	printf("*p : %d\n ",*p);//5
	printf("q : %d\n ",q);//ad of ptr p
	printf("*q : %d\n ",*q);//ad of a
	printf("**q : %d\n ",**q);//5
	printf("r : %d\n ",r);//ad of q
        printf("*r : %d\n ",*r);// ad of p
        printf("**r : %d\n ",**r);// ad od a
	printf("***r : %d\n", ***r);// 5
	
	***r =10;
	printf("A : %d\n ",a); 
	
	**q  = *p +2;
	
	printf (" **q : %d\n ",**q);
	printf (" *q + 2 : %d\n ",*q + 2);
	
	printf("A : %d\n ",a); 
	
// A : 5
//  p : 742917964
//  *p : 5
//  q : 742917968
//  *q : 742917964
//  **q : 5
//  r : 742917976
//  *r : 742917968
//  **r : 742917964
//  ***r : 5
// A : 10
//   **q : 12
//   *q + 2 : 742917972
//  A : 12


}

	
