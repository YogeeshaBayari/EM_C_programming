#include<stdio.h>
#include <string.h>

int main () {

    char s[100] ="";
    int i=0;
    char c ;
    while ( (c = getchar() ) != EOF )

	switch ( c ) {

	    case '\n' : //strcat(s,"\\n");break;
		        s[i] = '\\';
		        i++;
			s[i] = 'n';
			i++;
			break;
	    case '\t' : //strcat(s,"\\t");break;
			s[i] = '\\'; 
                        i++;
                        s[i] = 't';
                        i++;
                        break;	
	    default :  //strncat(s,&c,1);
			s[i] = c ;
		        i++;
	}

    printf( "\n\n After modification String : %s |",s);

}

