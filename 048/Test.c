#include <stdio.h>

int main(void) {
    int n1, n2;
    printf("Enter 2 positive integer: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    int i = 1;

    while ((i % n1 != 0) || (i % n2 != 0)) {
        ++i;
    }

    printf("LCM = %d\n", i);

    return 0;
}