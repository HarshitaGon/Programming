#include <stdio.h>

int main(void) {
    int x;
    char y;
    printf("Enter an integer and a character: ");
    scanf("%d", &x);
    scanf("%c", &y);
    scanf("%c", &y);

    printf("\nYour integer is %d\n", x);
    printf("Your character is %c\n", y);

    return 0;

}