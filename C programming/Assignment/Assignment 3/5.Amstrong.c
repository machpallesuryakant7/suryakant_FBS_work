//5.Check the given number is Armstrong number or not.

#include <stdio.h>

void main(){
	
	int num,sum=0,rem,temp;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	
	if(sum==temp){
		printf("The given number is armtrong");
	}
	else{
		printf("The given number is not armstrong");
	}	
}