#include<stdio.h>

int main() {

   char s[] = "123456789";
   char s1[] = "123";

   printf("%s\n",s);
    printf(":%s: - > :%5s:\n",s1,s1);
    printf(":%-5s:\n",s1); 
    printf(":%.5s:\n",s);

    printf(":%s: - > :%15.10s:\n",s1,s1);
    printf(":%s: - > :%-15.10s:\n",s1,s1);

    printf(":%s: - > :%15.10s:\n",s,s);
    printf(":%s: - > :%-15.6s:\n",s,s);

}
