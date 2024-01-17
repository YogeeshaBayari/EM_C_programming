#include<stdio.h>

void str_cat(char s1[],char t[]){

    int i=0,j=0;

    while( s1[i] != '\0')
	    i++;
    while( ( s1[i++] = t[j++] ) != '\0' ) ;  // Copy characters from t to s1

}



int main() {

    char s1[] = "Yogeesh";
    char s2[] = "Bayari";

    printf( "Before concat : %s \n",s1);
    str_cat(s1,s2);
    printf( "After concat : %s \n ",s1);

}

