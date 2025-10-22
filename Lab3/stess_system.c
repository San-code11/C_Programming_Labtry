#include <stdio.h>

int main() {
    float sstrength;
    float ystrength;
    float FOS;

    printf("Enter stress applied on the body (MPa):\n");
    scanf("%f", &sstrength);

    printf("Enter yield strength of the material (MPa):\n");
    scanf("%f", &ystrength);

    // description
    // every object has a certain limit till which it can withstand stress. just like the difference bte kinetic and static friction,
    // the factor of safety or modulus of measure helps us in understing the material and its property.
    FOS = ystrength / sstrength;

    printf("Factor of Safety for the given material: %.2f\n", FOS);

    if (FOS >= 2.0) {
        printf("The material is of excellent quality.\n");
    } else if (FOS >= 1.5 && FOS < 2.0) {
        printf("Acceptable with further adjustments.\n");
    } else {
        printf("Material fails regulatory guidelines.\n");
    }

    return 0;
}
