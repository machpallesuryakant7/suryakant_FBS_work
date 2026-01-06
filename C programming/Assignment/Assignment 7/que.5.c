#include <stdio.h>
void alternate(int arr[],int n);
void main(){
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter elements in the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	alternate(arr,n);
}

void alternate(int arr[],int n){
	printf("alternate numbers in the array:");
	for(int i=0;i<n;i+=2){
		printf("%d ",arr[i]);
	}
}