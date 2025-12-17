//6.Check the given number is Perfect number or not.


#include <stdio.h>

void main(){
	
	int num,i=1,sum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(i<num){
		
		if(num%i==0){
			sum=sum+i;	
		}
		i++;
	}
	
	if(sum==num){
		printf("The number is perfect");
	}
	else{
		printf("The number is not perfect");
	}
}