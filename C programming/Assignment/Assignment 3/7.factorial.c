//Find factorial of given number.


#include <stdio.h>

void main(){
	
	int num,fact=1;
	printf("Enter a number:");
	scanf("%d",&num);
	
	while(num>0){
		fact=num*fact;
		num--;
	}
	printf("factorial=%d",fact);
}