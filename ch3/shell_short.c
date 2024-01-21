#include<stdio.h>

int sort (int arr[],int n) {

    int i,j,temp,gap;

    for( gap = n/2 ; gap > 0 ; gap /=2 ) {
	for( i=gap ; i<n ; i++ )  {
	    for( j = i -gap ; j>=0 && arr[j] > arr[j+gap] ; j -=gap) {
			printf("hi\n");
		    temp = arr[j];
		    arr[j] = arr[j+gap];
		    arr[j+gap] = temp;

	    }
	}
    }
}


int main () {

    int arr []  = { 15,3,6,2,1,9,617,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf( "Before array sorting : \n");
    for( int i =0 ;i<size ;i++)
            printf(" %d ", arr[i]);

    sort(arr,size);
	
    printf( "After array sorting : \n");
    for( int i =0 ;i<size ;i++)
	    printf(" %d ", arr[i]);
    return 0; 
    
}
