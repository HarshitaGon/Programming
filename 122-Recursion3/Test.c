#include <stdio.h>

int sum(int);

int main(void)
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sum(n));
}

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    else
    {
        return sum(n / 10) + (n % 10);
    }
}
