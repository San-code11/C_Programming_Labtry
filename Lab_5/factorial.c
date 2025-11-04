#include<stdio.h>

int main() {
	
	int n;
	int fact = 1;
	int i = 1;
	
	printf("enter a number");
	scanf("%d" , &n);
	
	while( i <= n ) {
		
		fact = fact * i;
		i++;
	}
	
	printf("factorial of number %d" , fact);
	
	return 0;

}