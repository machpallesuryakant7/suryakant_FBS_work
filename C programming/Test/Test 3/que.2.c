//2. WAP to add alternate numbers from given range.


#include <stdio.h>

void main(){
	
	int start,end,sum=0;
	
	printf("Enter star number:");
	scanf("%d",&start);
	printf("Enter end number:");
	scanf("%d",&end);

     for(int i=start;i<=end;i+=2){
     	sum=sum+i;
	 }
	 printf("sum=%d",sum);

}