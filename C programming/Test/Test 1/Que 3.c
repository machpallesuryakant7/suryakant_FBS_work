//Que 3. Print last 2 digit of number.

#include <stdio.h>

void main(){
	
	int number,temp;
	printf("Enter a number:");
	scanf("%d",&number);
	
	temp=number%100;
	
	printf("last 2 digit of number:%d",temp);
	
}