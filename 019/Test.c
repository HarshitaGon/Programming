#include <stdio.h>

int main(void) {
    char x;
    printf("Enter a lowercase letter: ");
    scanf("%c", &x);

    if ((x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u'))
        printf("%c is a vowel\n", x);
    else
        printf("%c is a consonant\n", x);

    return 0;
}


/*

1)
Enter a lowercase letter: a
a is a vowel

2)
Enter a lowercase letter: b
b is a consonant

*/