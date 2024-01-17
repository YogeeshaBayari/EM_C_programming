#include<stdio.h>
int main(){

    FILE *fptr;
    fptr = fopen("HI.txt","w");
    char ch;
    fprintf(fptr,"a");
    fclose(fptr);
    fptr = fopen("HI.txt","r");
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fclose(fptr);
    return 0;
}
