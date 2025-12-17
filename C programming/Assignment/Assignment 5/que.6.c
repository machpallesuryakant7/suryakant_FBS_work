//Print a half pyramid using numbers

#include <stdio.h>

void main(){
	
	int m;
	scanf("%d",&m);
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<i+1;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}