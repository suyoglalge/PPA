#include <stdio.h>

void addition(int a, int b)
{
    printf("Addition = %d", a + b);
}

int main()
{
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    addition(x, y);

    return 0;
}