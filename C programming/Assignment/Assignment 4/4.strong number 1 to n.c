//4. Print strong numbers in the given range 1 to n.

#include <stdio.h>
void main() {

	int num,temp,digit,sum,fact;

	printf("Enter end number:");
	scanf("%d",&num);

	printf("Strong numbers: ");
	for(int i=1; i<=num; i++) {
		temp=i;
		sum=0;
		while(temp>0) {

			digit=temp%10;
			fact=1;
			for(int j=1; j<=digit; j++) {
				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i) {
			printf("%d ",i);
		}
	}

}