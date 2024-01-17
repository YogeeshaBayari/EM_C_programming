#include<stdio.h>

int main(){

    char c;
    int flag=1;
    int wordcount=0;

    while( ( c = getchar() ) != EOF)
    {   
	if( c == ' ' || c == '\n' || c == '\t') 
	
	flag = 1;

	else if (flag)
	    {			
	        wordcount++;
		flag = 0;
	    }
	
    }

    printf("\n Total word count : %d " , wordcount);
    return 0;
}

