#include<stdio.h>

int main(){

    int n_cont,c_cont,t_cont,s_cont;
    char c ;

    c_cont = n_cont = t_cont = s_cont = 0;

    while( ( c = getchar() ) != EOF ) {

	if ( c == '\t' )
	    t_cont++;
    	
        else if ( c == ' ')
		s_cont++;
	    
	else if ( c == '\n' )
	        n_cont++;

    	else
	    c_cont++;
    }

    printf( " Total char count : %d \n",c_cont);
    printf( " Total blank space count : %d \n",s_cont);
    printf( " Total tab space count : %d \n",t_cont);
    printf( " Total newline count : %d \n",n_cont);
}
