#include<stdio.h>

int main() {
	int a;
	int b;
	char op;
	 
	 
	printf("Enter arithmetic operator \n");
	scanf("%c", &op);
	printf("Enter first number ");
	scanf("%d", &a);
	
	printf("Enter second number");
	scanf("%d", &b);
	
	switch(op) {
		
		case '+':
			printf("Output- %d", a + b);
			break;
			
		case '-':
			printf("Output- %d", a - b);
			break;
		
		case '*':
			printf("Output- %d", a * b);
			break;
			
		case '/':
			printf("Output- %d", a / b);
			break;
			
		default:
			printf("Invalid input");
			break;
			
			
			
			
			
	}
	 return 0;
	
	
	 
}