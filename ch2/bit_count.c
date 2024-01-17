#include<stdio.h>

int bit_count( int num ) {

    int count;
    
    for ( count = 0 ; num != 0 ; num >>= 1 )
	{
	    if ( num & 1 )
		count++;

	}
    return count;
}

int main() {
    int count;
    int num = 32 ;
    int num2 = 3;

    count = bit_count(num);
    printf("Bit count of %d is %d !\n",num,count);
    count = bit_count(num2);
    printf("Bit count of %d is %d !!\n",num2,count);

}
