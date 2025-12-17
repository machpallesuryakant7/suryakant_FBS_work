#include <stdio.h>

void exchanging(int arr[],int size,int x,int y);
void main(){
	
	
	int size;
	printf("Enter number of elments:");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter array size:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	int x;
	printf("Xth postion array:");
	scanf("%d",&x);
	
	int y;
	printf("Yth postion array:");
	scanf("%d",&y);
	
	exchanging(arr,size,x,y);
	
	printf("After exchanging array:");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}	
			
}


void exchanging(int arr[],int size,int x,int y){
	
	int temp;
	
	x=x-1;
	y=y-1;
	
	if(x>=0 && x<size && y>=0 && y<size){
		
		temp=arr[x];
		arr[x]=arr[y];
		arr[y]=temp;
		
	}else{
		printf("Invalid");
	}
	
}