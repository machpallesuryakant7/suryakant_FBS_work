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
	
	int crr[2*n];
	for(int i=0;i<n;i++){
		crr[i]=arr[i];
	}
	for(int i=0;i<n;i++){
		crr[n+i]=brr[i];
	}
	printf("Enter elements in the array:");
	for(int i=0;i<2*n;i++){
		printf("%d ",crr[i]);
	}
}


