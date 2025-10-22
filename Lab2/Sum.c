#include<stdio.h>

int main() {
    int num1;
    int num2;
    int sum;
    
    printf("Enter first number: \n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);
    
    // sum of two numbers obtained via addition
    
    sum= num1 + num2;
    
    printf("The sum of the two given numbers : %d", sum);
    
    return 0;
    
}