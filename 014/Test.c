#include <stdio.h>

int main(void) {
    char x;
    printf("Enter 5 characters: ");

    scanf("%c", &x);
    printf("Your characters are %c, ", x);

    scanf("%c", &x);
    scanf("%c", &x);
    printf("%c, ", x);

    scanf("%c", &x);
    scanf("%c", &x);
    printf("%c, ", x);

    scanf("%c", &x);
    scanf("%c", &x);
    printf("%c ", x);

    scanf("%c", &x);
    scanf("%c", &x);
    printf("and %c\n", x);

    return 0;
}