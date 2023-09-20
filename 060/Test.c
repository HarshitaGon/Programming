#include <stdio.h>

int main(void) {
    int r;
    printf("Enter the number of rows (odd) (>= 5): ");
    scanf("%d", &r);

    int c = (r +1) / 2;

    int i = 1;

    while(i <= r) {
        int j = 1;

        while (j <= c) {
            if ((j == c) || (i + j == c + 1) || (i - j == c - 1))
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

            *
          * *
        *   *
      *     *
    *       *
      *     *
        *   *
          * *
            *
*/