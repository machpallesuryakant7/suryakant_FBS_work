//Que 1. WAP to calculate electricity bill.For 1-50 units – 30 rs/unit , For 51-150 units – 40 rs/unit, For 151and above units –50 rs/unit.


#include <stdio.h>

void main(){
	
	
	int units,electricity_bill;
	printf("Enter your units:");
	scanf("%d",&units);
	
	if(units>=1 && units<=50){
		electricity_bill=units*30;
		printf("electricity_bill=%d",electricity_bill);
	}
	else if(units>=51 && units<=150){
		electricity_bill=units*40;
		printf("electricity_bill=%d",electricity_bill);
	}
	else{
		electricity_bill=units*50;
		printf("electricity_bill=%d",electricity_bill);
	}
	
}