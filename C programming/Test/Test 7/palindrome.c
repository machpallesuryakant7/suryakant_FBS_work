#include <stdio.h>


#include <stdio.h>


void main(){
	
	
	int size;
	printf("Enter number of elments:");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter array size:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	
	
	isPalidrome(arr,size);
			
}


void isPalidrome(int arr[],int size){
	

    int flag = 1;

    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("Array is palindrome");
    } else {
        printf("Array is not palindrome");
    }	
}