//2. Write a program to check given 3 digit number is pallindrome or not.


#include <stdio.h>

void main(){
	
	int n,rev;
	printf("Enter a number:");
	scanf("%d",&n);
	rev=(n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);
	
	if(n==rev && n>=100 && n<=999){
		printf("The given 3 digit number is pallindrome");
	}
	else{
		printf("The given 3 digit number is not pallindrome");
	}
}