#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter 2 integers: ");
    scanf("%d%d", &a, &b);

    if (a > b)
        printf("%d is greater\n", a);
    else if (b > a)
        printf("%d is greater\n", b);
    else
        printf("They are equal\n");

    return 0;
}