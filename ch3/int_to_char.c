#include<stdio.h>
#include <string.h>

void reverse( char s[]){
    char temp;
    int i,j;
    for(i = 0,j = strlen(s) - 1; i<j;i++,j--){
	temp = s[i];
        s[i] = s[j];
        s[j]= temp ;
    }
}

void itoa ( int num ,char st[] ) {
    int sign;
    if ( num < 0 ){
        sign = (num < 0)? -1 : 1;
	num = - num;
    }

    int i=0;

    do {
        st[i++ ] = num %10 + '0';

        }while(( num = num/10) > 0 );

    if(sign < 0)
            st[i++] = '-';
    st[i]='\0';

    reverse(st);
}
int main() {

    int num = -12345;
    char st[50] ;

    itoa(num,st);

    printf( "the String is : %s ",st);

}
