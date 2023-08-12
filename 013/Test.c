#include <stdio.h>

int main(void) {
    char x;
    printf("Enter 2 characters: ");

    scanf("%c", &x);
    printf("Your characters are %d and ", x);

    scanf("%c", &x);
    scanf("%c", &x);
    printf("%d\n", x);

    return 0;
}