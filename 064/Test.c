#include <stdio.h>

int main(void) {
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    int i = 1;

    while (i <= r) {
        int to_print = i;
        int j = 1;

        while (j <= i) {
            printf("%02d ", to_print);
            to_print = to_print + (r - j);

            ++j;
        }

        printf("\n");
        ++i;
    }
}