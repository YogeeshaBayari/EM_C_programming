#include<stdio.h>
int main(){

    int age =10;
    int *ptr = &age;
    int new_age = *ptr;

    printf("AGE value %d\n",age); // 10
    printf("AGE adrres %d\n",&age); // 6422212
    printf("AGE adrres %d\n",*(&age)); //10

    printf(" VaLUE of pointer( go and fetch the age value )   %d\n",new_age); // 10
    printf("pointer varible (store address of age varible ) %d\n",ptr); // 6422212
    printf("ptr value( go and fetch the age value ) %d\n",*ptr); //10
    printf("ptr varible address  %d\n",&ptr); //6422216

    printf("new_age  varible address  %d\n",&new_age); //6422220
} 
    
