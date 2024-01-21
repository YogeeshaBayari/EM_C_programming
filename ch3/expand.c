#include<stdio.h>
#define MAXCHAR 50

char st1[MAXCHAR]="a-z9-4";
char st2[MAXCHAR];

void getstring() {
    char c ;
    int i =0 ;
    while ( (c=getchar())!= EOF  && c != '\n' ){

	st1[i]=c;
	i++;
    }
    st1[i]='\0';

}

void expand() {
    int i =0,j=0 ;
    char c ;
    while( ( c = st1[i++] ) != '\0' ) {

	if( st1[i] == '-' && st1[i+1] > c) {
		i++;
		while( c < st1[i] )
		    st2[j++] = c++ ;
	}
	else st2[j++] = c;

    }
}

int main() {

	//getstring();
	printf("GET STRING : %s",st1);
	expand();
	printf("Expand STRING : %s",st2);

}
