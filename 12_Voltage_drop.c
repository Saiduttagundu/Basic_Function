#include <stdio.h>

float voltage(float i, float r) 
{
    return i * r;
}

int main() 
{
    float i, r;
    printf("Enter Current and Resistance: ");
    scanf("%f%f", &i, &r);
    
    printf("Voltage Drop = %.2f V", voltage(i, r));
    return 0;
}
