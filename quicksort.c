#include<stdio.h>

void swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}


int partition(int a[],int start,int end){
    int pivot = a[end];
    int par_index = start;

    for (int i =start ;i<= end -1; i++) {
        if (a[i] <= pivot){

            swap(&a[par_index] ,&a[i]);
            par_index = par_index + 1;
        }
    }
    swap(&a[par_index],&a[end]);
    return par_index;
}


void quicksort(int a[],int start,int end){      
    if (start < end ) {  
	int pindex = partition(a,start,end);

	for (int k=pindex ;k<=end;k++)
	    printf(" %d ",a[k]);
	    printf("\n");
	for (int k=0 ;k<=pindex;k++)
	    printf(" %d ",a[k]);
	    printf("\n");
	    
	printf("----------------\n");

	quicksort(a,start,pindex-1);
        quicksort(a,pindex+1,end);
    }
}
                               

int main(){
    int a[] = {7,2,2,1,6,8,5,3,4};
    quicksort(a,0,8);
    for ( int i=0 ;i<9;i++)
       printf(" %d ",a[i]);
    return 0;
}
