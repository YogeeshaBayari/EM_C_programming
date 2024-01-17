#include<stdio.h>

int main(){

    char c;
    int flag=0;
    int wordcount=0;

    while( ( c = getchar() ) != EOF)
    {    
        if( c == ' ' || c == '\n' || c == '\t')

        {
            if(flag)
            {
                flag = 0;
                wordcount++;
            }
        }

        else 
        {
            flag=1;
        }
    }

    if( flag ) {        
        wordcount++;
        //printf("\nTotal Count %d ",wordcount);
    }

    printf("\n Total word count : %d " , wordcount);
    return 0;
}
