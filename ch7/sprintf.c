#include<stdio.h>

int main() {

    char buf[50];

    char st[] = "Yogi";
    int age = 20 ;

    int length = sprintf( buf , "NAME : %s , AGE : %d ",st,age);

    puts(buf);
    printf("Length is : %d ",length); 

}
