#include<stdio.h>

int main() {
	
	int num;
	int reverse;
	int remainder = 0;
	int original;
	
	printf("enter number");
	scanf("%d" , &num);
	original = num;
	
	while(original != 0) {
		
		reverse = original % 10;
		remainder = remainder * 10 + reverse;
		original = original / 10;
		
	}
	
	printf("reverse = %d" , remainder);
	
	return 0;
}