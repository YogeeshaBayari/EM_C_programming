#include<stdio.h>
int main(){

	enum day { sun, mon,tue, wed,thur,fri ,sat};
//	 1 2 3 4 5 6 7 
	for(int  i = sun; i<=sat ;i++)
		printf("%d ",i);

	return 0 ;
}
