#include <stdio.h>

int sum(int n);

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sum(n));

    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    else
    {
        return n + sum(n - 1);
    }
}