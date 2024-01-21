#include<stdio.h>

int binary_search(int arr[],int size ,int ele) {

    int start = 0;
    int end = size - 1;
    int mid;

    while ( start <= end ) {
	mid = ( start + end ) / 2;
	if ( ele > arr[mid] )
		start = mid + 1;
	else if ( ele < arr[mid] )
		end = mid - 1 ;
	else
		return mid+1 ;
    }
    return -1;
}

int main() {
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf( " Array Elements \n");
    for(int i =0 ; i<size ;i++)
	printf(" %d", arr[i]);
    
    printf("\n %d Element present !! \n location : %d  ",5,binary_search(arr,size,5));

}
