#include <stdio.h>

int main(void) {
    int r;
    printf("Enter the number of rows (odd) (>= 5): ");
    scanf("%d", &r);

    int i = 1;

    while (i <= r) {
        int j = 1;

        while (j <= r) {
            if ((i == 1) || (i == r) || (j == 1) || (j == r) ||
                    (i == j) || (i + j == r + 1))
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


/*
    Enter the number of rows (odd) (>= 5): 9

    * * * * * * * * *
    * *           * *
    *   *       *   *
    *     *   *     *
    *       *       *
    *     *   *     *
    *   *       *   *
    * *           * *
    * * * * * * * * *
*/