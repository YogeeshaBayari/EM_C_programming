#include<stdio.h>

char line[100]= "Hello yogi, hi yogi";
char pattern[] = "yogi";

int get_line(char line[] , int limit ) {
    char c ;
    int i =0 ;

    while ( limit > 0 && (c = getchar())!=EOF && c != '\n' ) {

	line[i++] = c;
    }

    if ( c == '\n')
	line[i++] = c ;
    line[i] = '\0';

    return i ;

}

int pattern_found(char line[] , char pattern[] ) {
    int i,j,k;
    for ( i =0 ; line[i] != '\0' ; i++ ) {

	for (j = i,k = 0 ;pattern[k] != '\0' && line[j] == pattern[k] ; j++,k++);
	//printf("HI ");
	if ( k>0 && pattern[k] == '\0')
	    return i;

    }
    return -1;

}

int strindex(char s[], char t[]) {
    int i, j, k, position;
    position = -1;  // Initialize to -1, indicating no match found initially

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
        if (k > 0 && t[k] == '\0') {
            // Found a rightmost occurrence, update position
            position = i;
        }
    }

    return position;
}

		
int main() {

    //while ( get_line(line,100) > 0 ){
    //printf( "Line :%s \n",line);
//	if ( pattern_found(line,pattern) >= 0 )
	int pos = pattern_found(line,pattern);
	 printf( "Pattern found IN this line :%d",pos);
	 
	 return 0 ;
	

}
