#include <stdio.h>

int gcd(int, int);

int main(void)
{
    int a, b;
    printf("Enter two no.: ");
    scanf("%d%d", &a, &b);

    int ans = gcd(a, b);
    printf("GCD and LCM of two no. are %d and %d\n", ans,
            (a * b) / ans);

    return 0;
}

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }

    else
    {
        return gcd(b, a % b);
    }
}