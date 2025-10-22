#include <stdio.h>

int main() {
    float teptr;

    printf("Enter temperature of given machine (in degrees Celsius):\n");
    scanf("%f", &teptr);

    // Safe range of temperature for the machine to operate is (60, 80] degrees Celsius
    // Violation of this may result in safety hazards.
    if (teptr > 60 && teptr <= 80) {
        printf("The machine is within safe bounds.\n");
    } else {
        printf("Danger! Initiate safety protocols.\n");
    }

    return 0;
}