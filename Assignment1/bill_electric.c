#include <stdio.h>

int main() {
    int cunits;
    float bill;

    printf("Enter units of electricity consumed:\n");
    scanf("%d", &cunits);
    
    //Given below is the corresponding cost of units of electricity with increasing unit consumption
    //Till 100 - 1.5 rupees
    //From 100-200 - 2 rupees
    //From 200-300 - 3 rupees
    //Above 300 - 5 rupees

    if (cunits <= 100) {
        bill = cunits * 1.5;
    } else if (cunits <= 200) {
        bill = 100 * 1.5 + (cunits - 100) * 2;
    } else if (cunits <= 300) {
        bill = 100 * 1.5 + 100 * 2 + (cunits - 200) * 3;
    } else {
        bill = 100 * 1.5 + 100 * 2 + 100 * 3 + (cunits - 300) * 5;
    }

    printf("Total electricity bill in correspondence to units consumed(in rupees): %.2f\n", bill);

    return 0;

}
