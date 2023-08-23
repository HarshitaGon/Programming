#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an integers: ");
    scanf("%d", &n);

    int i = 1;

    printf("\n");
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        ++i;
    }

    return 0;
}