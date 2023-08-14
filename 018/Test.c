#include <stdio.h>

int main(void) {
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);

    if ((x >= 'a') && (x <= 'z'))
        printf("%c is a lowercase letter\n", x);
    else if ((x >= 'A') && (x <= 'Z'))
        printf("%c is a uppercase letter\n", x);
    else if ((x >= '0') && (x <= '9'))
        printf("%c is a digit\n", x);
    else
        printf("%c is a special character\n", x);

    return 0;
}


/*

1)
Enter a character: a
a is a lowercase letter

2)
Enter a character: A
A is an uppercase letter

3)
Enter a character: 0
0 is a digit

4)
Enter a character: .
. is a special character

*/

/*

a - the compiler thinks that a is the name of a variable
'a' - the compiler thinks that 'a' is 97
"a" - the compiler thinks that "a" is a string

*/