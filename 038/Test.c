#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int count = 0;

    printf("%d", n);

    while (n > 0) {
        n = n / 10;
        ++count;
    }

    printf(" has %d digits\n", count);

    return 0;
}