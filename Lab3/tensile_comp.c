#include <stdio.h>

int main() {
    float tensile1;
    float tensile2;

    printf("Enter tensile strength of first metal: ");
    scanf("%f", &tensile1);

    printf("Enter tensile strength of second metal: ");
    scanf("%f", &tensile2);

    // Tensile strength determines the strength of the metal
    if (tensile1 > tensile2) {
        printf("Material 1 has greater tensile strength.\n");
    } else if (tensile2 > tensile1) {
        printf("Material 2 has greater tensile strength.\n");
    } else {
        printf("Both materials have equal tensile strength.\n");
    }

    return 0;
}stem