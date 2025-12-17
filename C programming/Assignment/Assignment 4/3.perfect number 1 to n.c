//3. Print perfect numbers in the given range 1 to n.

#include <stdio.h>

void main() {

	int i,num,sum;

	printf("Enter end number:");
	scanf("%d",&num);
	
	printf("Perfect numbers:");
	for(int i=1; i<=num; i++) {
		sum=0;
		for(int j=1; j<=i/2; j++) {
			if(i%j==0) {
				sum=sum+j;
			}
		}
		if(sum==i && i!=0) {
			printf("%d ",i);
		}
	}


}