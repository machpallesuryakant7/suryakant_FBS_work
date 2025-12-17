//5.Write a program to check whether a person is eligible to vote (age = 18).

#include <stdio.h>

void main(){
	
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age>=18){
		printf("person is eligible to vote");
	}
	else{
		printf("person is not eligible to vote");
	}
	
}