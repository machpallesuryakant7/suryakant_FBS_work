//Accept the age and check if the person is:Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

#include <stdio.h>

void main(){
	
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age>=0 && age<=12){
		printf("Child");
	}
	else if(age>12 && age<=19){
		printf("The person is teenager");
	}
	else if(age>=20 && age<=59){
		printf("The person is adult");
	}
	else{
		printf("The person is Senior");
	}
}