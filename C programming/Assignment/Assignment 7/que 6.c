#include <stdio.h>
void PrimeNumber(int arr[],int n);

void main(){
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter elements in the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	PrimeNumber(arr,n);
}

void PrimeNumber(int arr[],int n){
	printf("prime number:");
	
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=1;j<=arr[i];j++){
			if(arr[i]%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d ",arr[i]);
		}
	}
}