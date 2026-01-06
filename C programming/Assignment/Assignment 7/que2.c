#include <stdio.h>
void searching(int* arr,int size);
void main(){
	
	int size;
	printf("Enter size of array:");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter array of elements:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Display elements of array:");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);	
	}
	
	searching(arr,size);
}

void searching(int* arr,int size){
	
	int n,found=0;
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(int i=0;i<size;i++){
		if(arr[i]==n){
			printf("Number found %d at index %d",arr[i],i);
			found=1;
		}
		
	}
	if(found==0){
		printf("Number not found");
	}
		
}