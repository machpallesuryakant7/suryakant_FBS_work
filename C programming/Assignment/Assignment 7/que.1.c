#include <stdio.h>

void storedata(int* arr,int size);
void displaydata(int*  arr,int size);
void minimum(int* arr,int size);
void maximum(int* arr,int size);



void main(){
	
	int size;
	printf("Enter size of array:");
	scanf("%d",&size);
	
	int arr[size];
	storedata(arr,size);
	displaydata(arr,size);
	minimum(arr,size);
	maximum(arr,size);
}

void storedata(int* arr,int size){
	
	printf("Enter element of array:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
}

void displaydata(int*  arr,int size){
	printf("Display array of elements:");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}


void minimum(int* arr,int size){
	
	int min=arr[0];
	
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("\nMinimum elements in array:%d\n",min);
}

void maximum(int* arr,int size){
	
	int max=arr[0];
	
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("Maximum elements in array:%d",max);
}