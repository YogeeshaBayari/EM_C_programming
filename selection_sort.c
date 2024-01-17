 #include<stdio.h>

void selectionsort(int arr[] , int n){
	for(int i =0 ;i<n-1;i++){
		int min = i;

		for(int j=i+1;j<n;j++){
				if(arr[j]<arr[min]){
						min=j;
				}
		}
		
		int temp =arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		printf(" %d ",arr[i]);
		printf(" %d ",arr[min]);
	}

}


int main(){

	int arr[] = {5,3,2,6,1,4,7,8,9};

	selectionsort(arr,9);
	for (int i =0 ;i<9;i++)
		printf("%d",arr[i]);
	return 0;
}
