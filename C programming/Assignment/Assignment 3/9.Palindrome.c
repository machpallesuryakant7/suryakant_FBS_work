//9 Check the given number is Palindrome number or not.

#include <stdio.h>

void main(){
	
	int num,sum=0,rem,temp,i;
	
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	
	while(num>0){
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
		i++;
	}
	
	if(sum==temp){
		printf("The number is palindrome");
	}
	else{
		printf("The number is not palindrome");
	}
	
	
}