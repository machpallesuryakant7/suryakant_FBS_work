//1. WAP Print even and odd numbers in a given range.

#include <stdio.h>

void main(){
	
	int start,end;
	
	printf("Enter star number:");
	scanf("%d",&start);
	printf("Enter end number:");
	scanf("%d",&end);
	
    printf("Even numbers: ");
	for(int i=start;i<=end;i++){
		if(i%2==0){
		  printf("%d ",i);
      	}
	}
	
	printf("\nodd numbers: ");
	for(int i=start;i<=end;i++){
		if(i%2!=0){
		  printf("%d ",i);
      	}
	}
	
	
}

