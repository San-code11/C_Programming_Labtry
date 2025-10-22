#include <stdio.h>

int main() {
    float num1;
    float num2;
    float num3;

    printf("Enter first number:\n");
    scanf("%f", &num1);
    printf("Enter second number:\n");
    scanf("%f", &num2);
    printf("Enter third number:\n");
    scanf("%f", &num3);
    
    //Using if statement to determine the largest of the three numbers

    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %.2f\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %.2f\n", num2);
    } else {
        printf("The largest number is: %.2f\n", num3);
    }

    return 0;
}