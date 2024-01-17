#include<stdio.h>

#define MAXLINE  100 

int get_line ( char line[] , int len) {
    int c ;
    int i ;

    for (i =0 ; i < len-1 && ( c = getchar() ) != EOF && c != '\n'; ++i)

	line[i] = c ; 
	
    if ( c == '\n' ){
	line[i] = c;
	i++;
    }

    line[i] = '\0';

    printf( "\n Line and i  : %s - %d\n ",line,i);
    return i ;

}

void copy ( char to[] , char from[]){
	
    int i = 0;
    while ( (to[i] = from[i] ) != '\0' )
	    i++;
}


int main() {

    int len,max=0;
    char line[MAXLINE];
    char logest[MAXLINE];

    while (( len = get_line(line,MAXLINE)) > 0 ) {
	
	if (len > max) {
	    max = len;
		printf("\n MAXLINE %d\n " ,max);
	    copy(logest,line);
	}
    }
    if ( max > 0 )
	printf ( "Max LINE : %s " ,logest);
}
		
