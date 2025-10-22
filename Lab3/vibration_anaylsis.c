#include <stdio.h>

int main() {
    float amplitude, frequency;

    // vibration frequency and amplitude of the system.
    printf("Enter vibration amplitude (in meters): ");
    scanf("%f", &amplitude);

    printf("Enter vibration frequency (in Hz): ");
    scanf("%f", &frequency);

    // analysis of risk level according to conditions based on frequency and amplitude
    
    if (amplitude > 0.5 && frequency >= 20 && frequency <= 50) {
        printf("Risk Level: High\n");
        printf("Immediate supervision needed.")
        printf("Amplitude: %.2f\n", amplitude);
        printf("Frequency: %.2f Hz\n", frequency);
    } 
    else if (amplitude > 0.5 && frequency > 60) {
        printf("Risk Level: Medium\n");
        printf("Quick action is recommended.")
        printf("Amplitude: %.2f\n", amplitude);
        printf("Frequency: %.2f Hz\n", frequency);
    } 
    else {
        printf("Risk Level: Low\n");
        printf("Device is within operational bounds.")
        printf("Amplitude: %.2f\n", amplitude);
        printf("Frequency: %.2f Hz\n", frequency);
    }

    return 0;
}