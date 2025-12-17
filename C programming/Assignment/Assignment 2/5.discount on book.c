//5. Accept the price from user. Ask the user if he is a student (user may say y or n).


#include <stdio.h>

void main(){
	
	double price,choice,discount = 0, finalAmount;
	char student;
	printf("Enter your price:");
	scanf("%lf",&price);
	
    printf("Are you a student? (y/n): ");
    scanf(" %c", &student); 
	
	
	if(student=='y' || student=='Y'){
		
		if(price>=500){
			discount=price*0.20;
			finalAmount = price - discount;
			printf("Final amount to pay: %.2f\n", finalAmount);
		}
		else{
			discount=price*0.10;
			finalAmount = price - discount;
			printf("Final amount to pay: %.2f\n", finalAmount);
		}
	}
	else if(student=='n' || student=='N'){
		if(price>600){
			discount=price*1.5;
			finalAmount = price - discount;
			printf("Final amount to pay: %.2f\n", finalAmount);
		}
		else{
			printf("There is not discount");
		}
	}
	else{
		printf("Enter valid charater");
	}
	 
	
	
}