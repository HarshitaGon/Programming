#include <stdio.h>

int main(void) {
    char a, b;
    printf("Enter 2 characters: ");
    scanf("%c%c%c", &a, &b, &b);

    printf("Your integers are %c and %c\n", a, b);
    return 0;
}

/*

Enter 2 characters: a b
Your characters are a and b

*/