#include <stdio.h>

int main(void) {
    printf("* * * * * * * * * * * * * *\n");
    printf("* Choice   Operation      *\n");
    printf("*                         *\n");
    printf("* 1        Addition       *\n");
    printf("* 2        Subtraction    *\n");
    printf("* 3        Multiplication *\n");
    printf("* * * * * * * * * * * * * *\n");

    int a, b;
    printf("Enter 2 integers: ");
    scanf("%d%d", &a, &b);

    int c;
    printf("Enter a choice: ");
    scanf("%d", &c);

    if (c == 1)
        printf("%d + %d = %d\n", a, b, a + b);
    else if (c == 2)
        printf("%d - %d = %d\n", a, b, a - b);
    else if (c == 3)
        printf("%d * %d = %d\n", a, b, a * b);

    return 0;
}