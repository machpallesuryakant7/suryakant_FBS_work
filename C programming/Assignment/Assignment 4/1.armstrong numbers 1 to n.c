//1. Print armstrong numbers in the given range 1 to n.

#include <stdio.h>

void main(){
	
	int start,end,sum,rem,temp;
	printf("Enter star number:");
	scanf("%d",&start);
	printf("Enter end number:");
	scanf("%d",&end);

	printf("armstrong numbers:");
	for(int i=1;i<=end;i++){
		temp=i;
		sum=0;
	while(temp>0){
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp=temp/10;
	}
	if(sum==i){
		printf("%d ",i);
	}
		
		
		
	}
	
	
	
}