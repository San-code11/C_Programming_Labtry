#include<stdio.h>

int main() {
    float mass;
    float acceleration;
    float force;
    
    printf("Enter mass of object(in kg) \n");
    scanf("%f", &mass);
    printf("Enter rate of change of speed (in m/s2) \n");
    scanf("%f", &acceleration);
    
    // force is given by mass * acceleration
    
    force= mass*acceleration;
    
    printf("Force experienced(in newtons)-%.5f", force);
    
    return 0;
}
