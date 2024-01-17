#include<stdio.h>
int main(){
    int arr1[3] = {1,2,3};
    int arr2[4] = {4,5,6,7};
    int arr3[2] = {8,9};
	
    int* jagged[3] = {arr1,arr2,arr3};

    int size[3] = {3,4,2};
    int jg = 0;
	
    for (int i =0 ; i<3 ; i++ ){
        
	int *ptr = jagged[i];
//	int ptr[] = jagged[i];


	for ( int j =0 ; j<size[jg];j++){
	    
//	    printf( " %d ", *ptr);
	    printf( " %d ", ptr[j]);

//	    ptr++;
	}
	
	printf("\n ");
	jg++;
	jagged[i]++;
    }
    
    return 0;
}

