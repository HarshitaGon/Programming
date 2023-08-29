#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int digits = (int) log10((double) n) + 1;
    int divisor = (int) pow(10.0, (double) (digits - 1));

    int sum = 0;

    while (n > 9) {
        int first_digit = n / divisor;
        printf("%d + ", first_digit);
        sum = sum + first_digit;
        n = n % divisor;
        divisor = divisor / 10;
    }

    printf("%d = %d\n", n, sum + n);

    return 0;
}
