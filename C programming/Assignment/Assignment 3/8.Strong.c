//8. Check the given number is Strong number or not.

#include <stdio.h>
void main(){
	
	int num,temp,digit,sum=0,fact;
	
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		
		digit=num%10;
		fact=1;
		while(digit>0){
			fact=fact*digit;
			digit--;
		}
		sum=sum+fact;
		num=num/10;
	}
	
	if(sum==temp){
		printf("The given number is strong");
	}
	else{
		("The given number is not strong");
	}
	
}