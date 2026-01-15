#include <stdio.h>
void sum(int arr[],int n);
void main(){
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter elements in the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sum(arr,n);
}

void sum(int arr[],int n){
	printf("sum of the elements:");
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];	
	}
	printf("%d",sum);
}