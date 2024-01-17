i
#include<stdio.h>'

int sum(int a,int b){
	return a+b;
}

int main(){
	int a,b;
	a=5;
	b=5;

	int (*s) (int,int);

	s =&sum;
	//s=sum;// function name will  retun as pointer
	printf("sum is %d",s(2,3)); //derefencing

}

	
