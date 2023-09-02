#include <stdio.h>

int main(void) {
    int n1, n2;
    printf("Enter 2 positive integer: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    int i = 1;

    if (n1 > n2) {
        while ((n1 * i) % n2 != 0) {
            ++i;
        }

        printf("LCM = %d\n", n1 * i);
    }

    else {
        while ((n2 * i) % n1 != 0) {
            ++i;
        }

        printf("LCM = %d\n", n2 * i);
    }

    return 0;
}