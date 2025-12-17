//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.


#include <stdio.h>

void main(){
	
	double basic,da,ta,hra,total_salary;
	printf("Enter salary:");
	scanf("%lf",&basic);
	
	if(basic<=5000){
		
		da=basic*0.1;
		ta=basic*0.2;
		hra=basic*2.5;
		total_salary=basic+da+ta+hra;
		printf("total_salary %lf",total_salary);
	}
	else{
		da=basic*1.5;
		ta=basic*2.5;
		hra=basic*3.0;
		total_salary=basic+da+ta+hra;
		printf("total_salary %lf",total_salary);
	}
	
}