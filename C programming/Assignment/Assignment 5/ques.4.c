//4. pyramid pattern.

#include <stdio.h>


void main() {
    int m;
    scanf("%d", &m);

    for (int i = 1; i <= m; i++) {              
        for (int j = 1; j <= m - i; j++) {      
            printf(" ");
        }
        for (int k = 1; k <= 2*i - 1; k++) {   
            printf("*");
        }
        printf("\n");                            
    }
}