#include <stdio.h>

int fibonacci(int);

int main(void)
{
    int i;
    printf("Enter the ith term: ");
    scanf("%d", &i);

    printf("fibonacci of ith term: %d\n", fibonacci(i));

    return 0;
}

int fibonacci(int i)
{
    if (i == 1)
    {
        return 0;
    }

    else if(i == 2)
    {
        return 1;
    }

    else
    {
        return fibonacci(i - 2) + fibonacci(i - 1);
    }
}