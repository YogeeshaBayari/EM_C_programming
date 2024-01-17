#include<stdio.h>


int power( int base , int num ) {

    int p=1 ; 

    for ( int i =0 ; i < num ; ++i ) {
	    p  = p * base ;
	    printf( " %d " , p ) ;
	}
    return p;

}


int main() {
    int n1,n2;

    n1= 5;
    n2 = 2;

    printf(" Power is : %d ",power (-3,n2));
}


