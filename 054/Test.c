#include <stdio.h>

int main(void) {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int i = 1;
    while (i <= rows) {
        int j = 1;

        while (j <= rows) {
            if (i + j > rows)
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