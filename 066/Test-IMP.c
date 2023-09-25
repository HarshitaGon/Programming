#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r;
    printf("Enter the number of rows (odd): ");
    scanf("%d", &r);

    int temp = (r - 1) / 2;

    for (int i = -temp; i <= temp; ++i) {
        for (int j = -temp; j<= temp; ++j) {
            printf("%d ", abs(i) > abs(j) ? abs(i) : abs(j));
        }

        printf("\n");
    }
}


/*
    Enter the number of rows (odd): 7

    3 3 3 3 3 3 3
    3 2 2 2 2 2 3
    3 2 1 1 1 2 3
    3 2 1 0 1 2 3
    3 2 1 1 1 2 3
    3 2 2 2 2 2 3
    3 3 3 3 3 3 3
*/