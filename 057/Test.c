#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the number of rows (>= 4): ");
    scanf("%d", &n);

    int i = 1;

    while (i <= n) {
        int j = 1;

        while (j <= n) {
            if ((i == j) || (i == 1) || (j == n))
                printf("* ");
            else
                printf("  ");

            ++j;
        }

        printf("\n");

        ++i;
    }

    return 0;

}