#include<stdio.h>

void reverse(char string[]);

int main(){

    char st1[]="hello";

    char st[] = { 'a','b','\0'};
    char *sty = "jug";
    reverse(st1);
    // reverse(st);
    // reverse(sty);
    printf("String is %s \n",st1);
    puts(st1);
    puts(st);
    puts(sty);
    return 0 ;

}

void reverse(char string[]){
    int cnt=0;
    for(int i=0; string[i]!='\0';i++){
        cnt++;
    }
    printf("size is %d\n",cnt);

    int fst=0;
    int last=cnt-1;
    char temp;

    while (fst < last)
    {   
        temp=string[fst];
        string[fst]=string[last];
        string[last]=temp;
        fst++;
        last--;
    }   

}