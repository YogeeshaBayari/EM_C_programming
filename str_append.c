#include<stdio.h>

void append( char str1[] ,char str2[]){
	int i=0,j=0;

	while(str1[i] != '\0')
		i++;

	while( (str1[i++] = str2[j++])!='\0');
	
	printf(" %s ",str1);
}

int main(){

	char str1[]="Hello";
	char str2[] = "Yogeesh";

	append(str1,str2);

	return 0 ;
}

