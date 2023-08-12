#include <stdio.h>

int main(void) {
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);

    if ((y % 4 == 0) && (y % 100 == 0) && (y % 400 == 0))
        printf("It is a leap year\n");
    else if ((y % 4 == 0) && (y % 100 != 0))
        printf("It is a leap year\n");
    else
        printf("It is not a leap year\n");

    return 0;
}