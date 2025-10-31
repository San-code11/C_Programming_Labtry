#include<stdio.h>

int main() {
    float mass;
    float velocity;
    float KE;
    
    printf("Enter mass of object(in kg) \n");
    scanf("%f", &mass);
    printf("Enter velocity of object (in m/s2) \n");
    scanf("%f", &velocity);
    
    // The expression for Kinetic energy is given by 0.5 * mass * velocity^2
    
    KE= 0.5 * mass * velocity * velocity;
    
    printf("Kinetic Energy of the system-%.2f", KE);
    
    return 0;
}
