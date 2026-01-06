#include <stdio.h>
void evenodd(int arr[],int n);
void main(){
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter elements in the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	evenodd(arr,n);
}

void evenodd(int arr[],int n){
	printf("\nEven numbers:");
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		}
	}
	
	printf("\nOdd numbers:");
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			printf("%d ",arr[i]);
		}
	}
}

