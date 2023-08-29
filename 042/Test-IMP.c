#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int last_digit = n % 10;
    n = n / 10;

    int digits = (int) log10((double) n) + 1;
    int divisor = (int) pow(10.0, (double) (digits - 1));
    int first_digit = n / divisor;
    n = n % divisor;

    n = (last_digit * divisor) + n;
    n = (n * 10) + first_digit;

    printf("After swaping first and last digits, %d\n", n);

    return 0;
}