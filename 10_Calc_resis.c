#include <stdio.h>

float resistance(float v, float i) 
{
    return v / i;
}

int main() 
{
    float v, i;
    printf("Enter Voltage and Current: ");
    scanf("%f%f", &v, &i);

    printf("Resistance = %.2f Ohms", resistance(v, i));
    return 0;
}
