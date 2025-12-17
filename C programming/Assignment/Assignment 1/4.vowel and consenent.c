//Write a program to check whether a given character is a vowel or consonant.


#include <stdio.h>

void main(){
	
	char ch;
	printf("Enter a charater:");
	scanf("%c",&ch);
	
	if(ch=='A' || ch=='E' || ch=='I'|| ch=='O'|| ch=='U'|| ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
		printf("The given charater is vowel");
	}
	else{
		printf("The given charater is cosonenet");
	}
}