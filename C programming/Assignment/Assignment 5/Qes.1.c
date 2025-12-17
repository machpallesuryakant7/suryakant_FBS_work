//1. Print a solid square pattern.

#include <stdio.h>

void main(){
	
	int m,n;
	scanf("%d %d",&m,&n);
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			printf("* ");
		}
		printf("\n");
	}
}