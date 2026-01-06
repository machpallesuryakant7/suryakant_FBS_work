#include <stdio.h>
void reverse(int arr[],int n);
void main(){
	int n;

	printf("Enter array size:");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter elements in the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	reverse(arr,n);
}

void reverse(int arr[],int n){
	printf("reverse the array:");
	for(int i=n-1;i>=0;i--){
		printf("%d",arr[i]);
	}
}