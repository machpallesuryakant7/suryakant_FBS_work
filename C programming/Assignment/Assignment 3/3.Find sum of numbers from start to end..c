//Sum of numbers in given range.Find sum of numbers from start to end.

#include <stdio.h>

void main(){
	
	int start,end,sum=0;
	
	printf("Enter start number:");
	scanf("%d",&start);
	
	printf("Enter end number:");
	scanf("%d",&end);
	
	while(start<=end){
		sum=sum+start;
		start++;
	}
	printf("sum=%d",sum);
	

}
