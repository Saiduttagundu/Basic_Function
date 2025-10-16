#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;
    float result;

    printf("Enter 1st no.:");
    scanf("%d", &x);

    printf("Enter 2nd no.:");
    scanf("%d", &y);

    result = add(x, y);

    printf("The Sum is: %.2f", result);
    return 0;
}