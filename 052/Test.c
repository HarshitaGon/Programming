#include <stdio.h>

int main(void) {
    int lower_limit, upper_limit;
    printf("Enter lower and upper limits: ");
    scanf("%d", &lower_limit);
    scanf("%d", &upper_limit);

    printf("\n");

    int i = lower_limit;

    while (i <= upper_limit) {
        int j = 1;

        while (j <= 9) {
            printf("%d x %d = %d\n", i, j, (i * j));
            ++j;
        }

        printf("\n");
        ++i;
    }
}