#include <stdio.h>
int main(){
	int n, arr[n]; 
	printf("enter number of elements in array: ");
	scanf("%d",&n);
	if(n<=0){
		printf("Array size must be greater than zero!");
	}
	printf("Enter array elements:\n");

	for(int i=0;i<n;i++){
	
	scanf("%d\n",&arr[i]);
	
	} 
	int sum=0,avg;
	for(int i=0;i<n;i++){
			sum=sum+arr[i];
		avg= sum/n;
	}
	int smallest=arr[0];
	int largest = arr[0];
	for(int i=1;i<n;i++){
	
		if(smallest>arr[i]){
			smallest=arr[i];
		}
		if(largest<arr[i]){
			largest=arr[i];
		}
	}
	printf("Sum of array elements = %d",sum);
	printf("Average = %d",avg);
	printf("smallest element: %d\n", smallest);
	printf("largest element: %d", largest);
	
	return 0;
}

