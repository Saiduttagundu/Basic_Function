#include <stdio.h>

float current(float v, float r) 
{
    return v / r;
}

int main() 
{
    float v, r;
    printf("Enter Voltage and Resistance: ");
    scanf("%f%f", &v, &r);

    printf("Current = %.2f A", current(v, r));
    
    return 0;
}
