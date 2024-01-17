#include<stdio.h>
#include<stdlib.h>

void missing_no(int arr[],int n) {
    
    int temp[n+1];

    for(int i =0 ; i <=n ; i++ )
	temp[i] = 0;

    for( int j =0 ; j < n ; j++ )
	    temp[ arr[j] % (n+1) ] = 1;

    int answer=-1;;
    for( int k =0 ; k<= n ; k++ ) {
	if ( temp[k] == 0 ) {
	    answer = k;
	    break;
	}

    }
    printf("Answer : %d\n" , answer+arr[0]);
}

int main() {

    int arr[]  = {10,11,12,13,14,16,17,18,19};
    int ar[] = {0,1,2,3,4,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    missing_no(arr,n);
    missing_no(ar,sizeof(ar)/sizeof(ar[0]));
  
}
