#include <stdio.h>

int main(void) {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int columns;
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("\n");

    int i = 1;

    while (i <= rows) {
        int j = 1;
        
        while (j <= columns) {
            printf("* ");
            ++j;
        }

        printf("\n");
        ++i;
    }

    return 0;
}