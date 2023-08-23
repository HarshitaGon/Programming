#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int rem = n % 10;
    printf("%d", rem);
    n = n / 10;
    int sum = rem;

    while (n > 0) {
        rem = n % 10;
        printf(" + %d", rem);
        n = n / 10;
        sum = sum + rem;
    }

    printf(" = %d\n", sum);

    return 0;
}