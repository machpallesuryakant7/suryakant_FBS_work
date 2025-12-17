//2. Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.

#include <stdio.h>

void main(){
	
	int a,b,c;
	printf("Enter first side of triangle:");
	scanf("%d",&a);
	printf("Enter second side of triangle:");
	scanf("%d",&b);
	printf("Enter third side of triangle:");
	scanf("%d",&c);
	
	
	if (a + b > c && a + c > b && b + c > a){
	
	if(a==b && b==c){
		printf("The triangle is equilateral");
	}
	else if(a==b || b==c || c==a){
		printf("The triangle is isosceles");
	}
	else{
		printf("The triangle is scalene");
	}
   }
   else{
   	printf("The given sides do not form a valid triangle\n");
   }
}
