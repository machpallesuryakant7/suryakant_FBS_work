//2.Print table for given number.

#include <stdio.h>

void main(){
	
	int n,i=1;
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(i<=10){
		
		printf("%d * %d = %d \n",n,i,n*i);
		i++;
	}
}