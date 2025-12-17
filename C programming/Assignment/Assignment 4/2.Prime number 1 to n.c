//2. Print prime numbers in the given range 1 to n.


#include <stdio.h>

void main() {

	int n,flag;
	printf("Enter end number:");
	scanf("%d",&n);

     printf("Prime numbers: ");
	for(int i=2; i<=n; i++) {
		flag=0;
		for(int j=2; j<=i/2; j++) {
			if(i%j==0) {
				flag=1;
				break;
			}
		}
		if(flag==0){
		printf("%d ",i);
	}
	}
	

}
