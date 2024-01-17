#include<stdio.h>

void swap(int* a , int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}



void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
	for(int j=0;j<n-i-1;j++) { 
	    if(arr[j]>arr[j+1]){
		swap(&arr[j],&arr[j+1]);
		
	    }
	}
    }
}

int main(){
    int arr[] = {5,2,3,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    //printf("%d",n);
    bubblesort(arr,n);
    for (int i =0 ;i<5;i++)
       printf(" %d ",arr[i]);
    return 0;
}

