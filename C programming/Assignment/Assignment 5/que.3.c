//3. Print an inverted right-angled triangle pattern.
#include <stdio.h>

void main(){
	
	int m;
	scanf("%d",&m);
	
	for(int i=1;i<=m;i++){
		for(int j=0;j<=m-i;j++){
			printf("* ");
		}
		printf("\n");
	}
}