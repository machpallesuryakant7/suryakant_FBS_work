//3. Write a program to find greatest of three numbers using nested if-else.

#include <stdio.h>

void main() {

	int a,b,c;
	printf("Enter  first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);


	if(a>b && a>c) {
		printf("%d is the greatest number",a);
	} 
	else if(b>a && b>c) {
		printf("%d is the greatest number",b);
	} 
	else if(c>a && c>b){
		printf("%d is the greatest number",c);
	}
	else{
		printf("Enter correct number:");
	}
}