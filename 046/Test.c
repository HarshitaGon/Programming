#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Factors = 1\n");
    }

    else {
        printf("Factors = 1");

        int i = 2;

        while (i < n) {
            if (n % i == 0) {
                printf(", %d", i);
            }

            ++i;
        }

        printf(" and %d\n", i);
    }

    return 0;
}