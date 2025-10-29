#include <stdio.h>

float average(float a, float b, float c, float d, float e) 
{
    return (a + b + c + d + e) / 5;
}

int main() {
    float a, b, c, d, e;
    printf("Enter 5 numbers: ");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    
    printf("Average = %.2f", average(a, b, c, d, e));
    return 0;
}
