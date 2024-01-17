
#include<stdio.h>
#include<stdlib.h>
int main(){
    int* jagged[3];
    int a=1; 
    //kmk
    jagged[0] = malloc(sizeof(int)*3);
    jagged[1] = malloc(sizeof(int)*4);
    jagged[2] = malloc(sizeof(int)*2);

    int size[3] = {3,4,2};
    int jg = 0;
	
    int number = 10;    
   //input

    for (int i =0 ; i<3 ; i++ ){

        int *ptr = jagged[i];

        for ( int j =0 ; j<size[jg];j++){
//            ptr[i][j]=number++;
	    *ptr = number++;
	    ptr++;
        }

       jg++;
        
    }
    
    jg=0;
   
   // print
    for (int i =0 ; i<3 ; i++ ){
        
	int *ptr = jagged[i];

	for ( int j =0 ; j<size[jg];j++){
	    
	    printf( " %d ", *ptr);
	    ptr++;

//	    printf( " %d ", ptr[j]);
	}
	
	printf("\n ");
	jg++;
//	jagged[i]++;
    }
    
    for (int i = 0; i < 3; i++) {
        free(jagged[i]);
    }
    
    return 0;
}

