#include<stdio.h>

void insertion(int a[],int n){
    for(int i=1;i<n;i++){
	int value = a[i];
	int hole = i;

	while( hole>0 && (a[hole-1] > value)){
	    a[hole] = a[hole-1];
	    
	    for(int j =0 ; j<5;j++)
            printf( " %d",a[j]);
	    
	    printf(" hole : %d ",hole);
	    
	    printf("\n");
            //printf("value : %d ",value);

	    hole= hole-1;
	    
	}
	a[hole]=value;
	
	for(int j =0 ; j<5;j++)
            printf( " %d",a[j]); 
        printf("\n");
            
    }
}

int main(){
    int a[] = {7,2,5,3,5};
    for(int j =0 ; j<5;j++)
        printf( " %d",a[j]);
        printf("\n");

    insertion(a,5);
    for(int j =0 ; j<5;j++)
        printf( " %d",a[j]);
    return 0;

}
