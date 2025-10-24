#include<stdio.h>

int main() {
	
	
	float num1;
	float num2;
	char op;

		
	printf("Enter arithmetic operator ");
	scanf("%c", &op);	

	printf("enter first number ");
	scanf("%f", &num1);

    printf("enter second number ");
	scanf("%f", &num2);
	
	
	if( op == '+') {
		printf("output %f", num1 + num2);
	} else if(op == '-') {
		printf("output %f ", num1 - num2);
		
		
	}else if(op == '*') {
		printf("output %f ", num1 * num2);
	
    }else if(op == '/') {
		printf("output %f ", num1 / num2);
		
    } else {
    	printf("Enter proper logical operator.");
	}
	
	return 0;
}