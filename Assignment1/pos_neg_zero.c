#include <stdio.h>

int main() {
    float num;

    printf("Enter a number( you may input integers , fractions ): \n");
    scanf("%f", &num);
    printf("The number input by the user: %f \n", num);
    

    if (num> 0) {
        printf("The number being analyzed is positive.\n");
    } else if (num < 0) {
        printf("The number being analyzed is negative.\n");
    } else {
        printf("The number analyzed is zero.\n");
    }

    return 0;
}