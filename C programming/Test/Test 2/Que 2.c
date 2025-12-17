//Que 2. WAP to check if number is positive, negative or neutral (0).


#include <stdio.h>

void main(){
	
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	
	if(number>0){
		printf("The number is positive");
	}
	else if(number<0){
		printf("The number is negative");
	}
	else{
		printf("The number is neutral");
	}
}