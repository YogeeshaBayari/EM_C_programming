#include<stdio.h>

int get_bit(unsigned int x,int p ,int n) {

   return x << (p+1 -x ) & ~(~0 << n );

}   

int main() {

   unsigned int  x = 8;
   int p = 4444 ;
   int n = 1 ;

   printf( " BIT is %d",get_bit(x,p,n));

}
