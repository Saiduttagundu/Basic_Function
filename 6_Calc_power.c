#include <stdio.h>

float power(float v, float i) 
{
    return v * i;
}

int main() 
{
    float v, i;
    printf("Enter Voltage and Current: ");
    scanf("%f%f", &v, &i);
    
    printf("Power = %.2f W", power(v, i));
    return 0;
}
