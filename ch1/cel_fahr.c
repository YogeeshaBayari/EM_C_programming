
#include<stdio.h>

int main() {

    float fahr,cel;
    
    printf("Celsius to Fahrenheit \n");

    for( cel=0; cel<150 ; cel=cel+10 ) {
	fahr = ( 9/5 ) * cel + 32;
	printf( "%2d \t %3.2f \n",cel,fahr);
    }

    return 0;
}    
