#include<stdio.h>

void reversebit( int n , int end ,int start) {
    int rev = 0 ;
    while( end > start ) {
	if ( (n & 1<<end ) != 0 )
	    rev = rev | 1 << start ;
	if ( (n & 1 << start )!=0 )
	    rev =rev | 1 << end ;

	end--;
	start++;
    }
    printf("After reversing the bit %d\n",rev );
}

int main() {

    int n=8;
    
    reversebit(n,3,0);
    return 0 ;
}
