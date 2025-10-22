#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
    
    //To determine a leap year there are two steps
    //centrion year is divisible by 400
    //non centrion year by 4 and not by 100

    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        if (year % 100 == 0) {
            printf("%d is not a leap year.\n", year);
        } else {
            if (year % 4 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        }
    }

    return 0;
}
