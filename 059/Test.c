#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the number of rows (odd): ");
    scanf("%d", &n);

    n = (n + 1) / 2;

    int i = 1;

    while (i <= n) {
        int j = 1;

        while (j <= (i - 1) * 2) {
            printf("  ");
            ++j;
        }

        j = 1;

        while (j <= n - i + 1) {
            printf("* ");
            ++j;
        }

        printf("\n");
        ++i;
    }

    i = n - 1;

    while (i >= 1) {
        int j = 1;

        while (j <= (i - 1) * 2) {
            printf("  ");
            ++j;
        }

        j = 1;
        
        while (j <= n - i + 1) {
            printf("* ");
            ++j;
        }

        printf("\n");
        --i;
    }

    return 0;
}


/*
    Enter the number of rows (odd): 9

    * * * * *
        * * * *
            * * *
                * *
                    *
                * *
            * * *
        * * * *
    * * * * *
*/