#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 6, y = 24;
    int result;

    result = add(x, y);

    printf("The Sum is: %d", result);
    return 0;
}