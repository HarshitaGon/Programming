#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int factorial = 1;
    printf("%d! = ", n);

    if (n == 1) {
        printf("%d\n", n);
    }

    else {
        while (n > 1) {
            factorial = factorial * n;
            printf("%d x ", n);
            --n;
        }

        printf("%d = %d\n", n, factorial);
    }

    return 0;
}