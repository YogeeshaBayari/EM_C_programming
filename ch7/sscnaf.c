#include<stdio.h>
#include <stdlib.h>

int main () {

    char input [] = "Name : John , Age : 20 " ;

    char *name = (char *)malloc(20 * sizeof(char));
 
    int age;

    sscanf( input , "Name : %s , Age : %d ",name,&age);

    printf( " Age is %d \n",age);
    printf( " Name is %s ",name);

}
