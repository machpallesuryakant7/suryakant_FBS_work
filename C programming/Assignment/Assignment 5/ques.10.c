void main(){
	
	int n=4;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			if(i==1 || i==4 || j==1||j==4 || i==j || i+j==3){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}

}