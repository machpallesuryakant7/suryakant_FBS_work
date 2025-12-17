//6.Write a program to check whether a given character is uppercase or lowercase.


#include <stdio.h>

void main(){
	
	char ch;
	printf("Enter a charater:");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<= 'Z' ){
		printf("given character is uppercase");
	}
	else{
		printf("given character is lowercase");   
	}
}