/*  Write a function expand(s1,s2) that expands shorthand notations like a-z in the
string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits,
and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing -
is taken literally *?

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
