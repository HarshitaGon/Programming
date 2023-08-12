#include <stdio.h>

int main(void) {
    char x;
    printf("Enter the first character: ");
    scanf("%c", &x);

    char y;
    printf("Enter the second character: ");
    scanf("%c", &y);
    scanf("%c", &y);

    char z;
    printf("Enter the third character: ");
    scanf("%c", &z);
    scanf("%c", &z);

    printf("\nYour characters are %c, %c and %c\n", x, y, z);

    return 0;
}





/*

Enter the first character: a
Enter the second character: b
Enter the third character: c

Your characters are a, b and c

*/