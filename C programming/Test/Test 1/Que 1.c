//Que 1. Convert the time entered in hh,min and sec into total seconds.


#include <stdio.h>

void main(){
	
	int hh,min,sec,total_sec;
	printf("Enter your hh:min:sec :");
	scanf("%d:%d:%d",&hh,&min,&sec);
	
	total_sec=(3600*hh)+(60*min)+sec;
	printf("total_sec=%d sec",total_sec);
	
}