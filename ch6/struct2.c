#include<stdio.h>
#include<string.h>

struct student {

    int  roll;
    char name[10];
    float marks;

};

int main() {

    struct student s1 = { "hi",67,9};

    //s1.roll = 5;
    //s1.name = "YOgi";
//    strcpy(s1.name , "YOgi");
    //s1.marks = 15.2;

    printf( "Roll %d : ",s1.roll);
    printf(" Name %s : ",s1.name);
    printf("Marks %f : ",s1.marks);
    
}
