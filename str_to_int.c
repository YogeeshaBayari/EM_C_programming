#include<stdio.h>

int main(){

	char s [] ="123";

	int n=0;

	for(int i=0; s[i]>='0' && s[i]<='9';++i)
			n = 10* n+(s[i]-'0');

	printf("Integer is : %d",n);
}
