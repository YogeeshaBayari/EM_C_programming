#include<stdio.h>

int main() {

    char s[] = "Hello Yogeesh 123";
    int i=0;
    int arr[10] = {0};
    int sp=0,other=0;
    int digit=0;

    while( s[i] != '\0' ) {

	switch(s[i]) {

	    case '0':
	    case '1':
	    case '2':
	    case '3':
	    case '4':
            case '5':
	    case '6':
	    case '7':
	    case '8':
	    case '9': arr[ s[i] - '0' ]++;digit++;break;
	    case ' ': sp++;break;
	    //case if( (s[i] >= 'A' && s[i] <= 'z') || (s[i] >='a' && s[i]<= 'z' ))
	    default : other++;
	}
	i++;
    }
	
    printf("String :%s\n",s);    
    printf( " Digit Occurance : \n Digits \t No of Times \n --------------------------\n ");

    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	    printf( " %d \t\t %d\n ",i,arr[i]);


    printf(" Total character count : %d \n Total Digit count : %d \n Space count : %d \n Other Charcter count : %d \n",i,digit,sp,other);

}
		    
		   
