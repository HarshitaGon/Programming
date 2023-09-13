#include <stdio.h>

int main(void) {
    int rows;
    printf("Enter the number of rows (>= 3): ");
    scanf("%d", &rows);

    int columns;
    printf("Enter the numbers of columns (>= 3): ");
    scanf("%d", &columns);

    int i = 1;

    while (i <= rows) {
        int j = 1;

        while (j <= rows - i) {
            printf("  ");
            ++j;
        }

        j = 1;
        
        while (j <= columns) {
            if ((i == 1) || (i == rows) || (j == 1) || (j == columns))
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