#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("1 is neither prime nor composite\n");
    }

    else {
        bool n_is_prime = true;

        int i = 2;

        while (i <= (int) sqrt((double) n)) {
            if (n % i == 0)
                n_is_prime = false;

            ++i;
        }

        if (n_is_prime)
            printf("%d is prime\n", n);
        else
            printf("%d is composite\n", n);
    }

    return 0;
}