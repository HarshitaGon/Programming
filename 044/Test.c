#include <stdio.h>

int main(void) {
    double base;
    printf("Enter the base: ");
    scanf("%lf", &base);

    int exponent;
    printf("Enter the integral exponent: ");
    scanf("%d", &exponent);

    if ((base == 0.0) && (exponent == 0)) {
        printf("\n0 ^ 0 is undefined\n");
    }

    else if ((base == 0.0) && (exponent < 0)) {
        printf("\nDividing by 0 is undefined\n");
    }

    else {
        double result = 1.0;
        printf("\n%g ^ %d = ", base, exponent);

        if (exponent >= 0) {
            while (exponent > 0) {
                result = result * base;
                --exponent;
            }

            printf("%g\n", result);
        }

        else if (exponent < 0) {
            while (exponent < 0) {
                result = result * base;
                ++exponent;
            }

            printf("%g\n", 1 / result);
        }
    }

    return 0;
}