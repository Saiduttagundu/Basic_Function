#include <stdio.h>

int greatest(int a, int b) 
{
    return (a > b) ? a : b;
}

int main() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    printf("Greatest = %d", greatest(a, b));
    return 0;
}
