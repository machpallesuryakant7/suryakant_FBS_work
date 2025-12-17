//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include <stdio.h>

void main(){
	
	int num1,num2,choice,addition,subtraction,division,multiply,mod;
	printf("Enter a number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	
	printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    
    if(choice==1){
    	addition=num1+num2;
    	printf("%d",addition);
	}
	else if(choice==2){
		subtraction=num1-num2;
		printf("%d",subtraction);
	}
	else if(choice==3){
		multiply=num1*num2;
		printf("%d",multiply);
	}
	else if(choice==4 && num2!=0){
		division=num1/num2;
		printf("%d",division);
	}
	else if(choice==5){
		mod=num1%num2;
		printf("%d",mod);
	}
	
	
}