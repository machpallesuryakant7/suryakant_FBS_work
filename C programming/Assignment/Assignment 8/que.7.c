#include <stdio.h>


void main(){
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter elements in the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	
	int brr[n];
	printf("Enter elements in the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&brr[i]);
	}
	
	int crr[n];
	printf("Enter elements in the array:");
	for(int i=0;i<n;i++){
		crr[i]=arr[i]+brr[i];
		printf("%d ",crr[i]);
	}
}


