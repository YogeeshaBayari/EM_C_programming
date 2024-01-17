#include<stdio.h>

void merge(int l[],int r[],int a[],int nl ,int nr){
    int i,j,k;
    i=j=k=0;

    while(i<nl && j<nr){
	
	if(l[i]<=r[j]){
	   a[k]=l[i];
           i++;
        }
        else {
	    a[k]=r[j];
    	    j++;
	}
	k++;
    }
    
    while(i<nl){
	a[k]=l[i];
        i++;
	k++;
    }
    while(j<nr){
	a[k]=r[j];
        j++;
	k++;
    }	
}

void mergesort(int arr[],int n){
    if(n<2)
	return;
    int mid = n/2;
    int left[mid];
    int right[n-mid];
    for(int i=0;i<mid;i++)
        left[i]=arr[i];
    for(int i =0;i<mid;i++)
        printf("%d ",left[i]);
    printf("\n");
    for(int j=mid;j<n;j++)
        right[j-mid]=arr[j];
    for(int i =0;i<(n-mid);i++)
        printf("%d ",right[i]);
    printf("\n");
    mergesort(left,sizeof(left)/sizeof(left[0]));
    mergesort(right,sizeof(right)/sizeof(right[0]));
    merge(left,right,arr,sizeof(left)/sizeof(left[0]),sizeof(right)/sizeof(right[0]));

}

int main(){
    int a[] = {5,4,2,3,7,2,6,8};
    int n = sizeof(a)/sizeof(a[0]);
    mergesort(a,n);
    for(int i =0;i<n;i++)
        printf("%d ",a[i]);
}

