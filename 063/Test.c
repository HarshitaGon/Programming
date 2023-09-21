#include <stdio.h>

int main(void) {
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    int i = 1;

    while (i <= r) {
        int to_print = i;
        int j = 1;

        while (j <= r) {
            printf("%02d ", to_print);
            to_print = to_print + r;

            ++j;
        }

        printf("\n");
        ++i;
    }
}


/*
    Enter the number of rows: 5

    01 06 11 16 21
    02 07 12 17 22
    03 08 13 18 23
    04 09 14 19 24
    05 10 15 20 25
*/