#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    //If a number is divisible by both 5 and 11, it means that the number is divisible by 55.
    //1.5 and 11 are both coprimes
    //2.The number can be written in the form number=k*5*11; where k can be any constant.
    //3.Simplifies the code instead of checking 2 conditions.

    if (number % 55 == 0) {
        printf("%d is divisible by both 5 and 11.\n", number);
    } else {
        printf("%d is not divisible by both 5 and 11.\n", number);
    }

    return 0;
}