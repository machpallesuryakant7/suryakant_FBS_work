//10 Find Sum of first and last digit of given number.


void main(){
	
	int num,sum=0,rem,temp,i;
	
	printf("Enter a number:");
	scanf("%d",&num);
	rem=num%10;
	while(num>10){
		num=num/10;
		sum=num;	
	}
	sum=sum+rem;
	printf("sum of first and last digit=%d",sum);
}