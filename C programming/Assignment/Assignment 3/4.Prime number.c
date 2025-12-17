//4.Check the given number is prime or not.


#include <stdio.h>

void main(){
	
	int n,i=2,flag=0;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n<=1){
		printf("The number is not prime");
	}
	
	while(i<=n/2){
		if(n%i==0){
			flag=1;
			break;
		}
		i++;
	}
	
	if(flag==0){
		printf("The given number is prime");
	}
	else{
		printf("The number is not prime");
	}
}