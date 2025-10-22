#include <stdio.h>

int main() {
    int N;
    int summation;
    
    
    printf("Enquiry for the number of terms. \n");
    printf("NOTE: number of terms is always positive. \n");
    printf("Enter number of terms: ");
    scanf("%d", &N);

    if ( N > 0) {
        summation = N * (N + 1) / 2;
        printf("Sum of the first %d natural numbers is: %d\n", N, summation);
    } else if(N == 0) {
        printf("The sum is zero since the number of terms is zero.");
    } else {
        printf("Please enter valid number of terms.\n");
    }
    

    return 0;
}
