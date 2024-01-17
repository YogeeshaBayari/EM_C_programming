#include<stdio.h>
#include<string.h>

struct  student {
    char name[100];
    int rollno;
    float cgpa;
} ;

int main(){

struct student s1;
s1.rollno=100;
s1.cgpa=9.2;
strcpy(s1.name, "Yogeesh");

printf("NAME : %s\n",s1.name);
printf("ROLLNO : %d\n",s1.rollno);
printf("CGPA : %f\n",s1.cgpa);

    //struct student s2[10];
    //s2[0].cgpa = 2.3;
    //s2[1].cgpa = 3;
    //s2[2].cgpa = 3;

    //struct student (*s3)[10] = &s2;
    //printf("CGPA with dot     %f\n", (*s3)[0].cgpa);

struct student *s3 = &s1;
printf("CGPA_  with dot     %f\n",(*s3).cgpa);
printf("CGPA_ with arrow %f\n",s3->cgpa);


}
