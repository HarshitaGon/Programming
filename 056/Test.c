#include <stdio.h>

int main(void) {
    int rows;
    printf("Enter the number of rows (>= 3): ");
    scanf("%d", &rows);

    int columns;
    printf("Enter the number of columns (>= 3): ");
    scanf("%d", &columns);

    int i = 1;

    while (i <= columns) {
        printf("* ");
        ++i;
    }

    printf("\n");

    /////////////////////////////////////////////////////////

    i = 2;

    while (i <= rows - 1) {
        printf("* ");

        int j = 1;

        while (j <= columns - 2) {
            printf("  ");
            ++j;
        }

        printf("* \n");

        ++i;
    }

    ////////////////////////////////////////////////////////

    i = 1;

    while (i <= columns) {
        printf("* ");
        ++i;
    }

    printf("\n");
}