#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Your integer is %d\n", n);

    return 0;
}

/*

Enter an integer: 10
Your integer is 10

*/

/*

Whitespace means ' ', '\t' or '\n'.

%d is used for integers.

When using %d with scanf,
(1) all leading (shuru mein aane vaala) whitespace (if any) from the input
    buffer are taken out and thrown away.
(2) scanf stops at the first useless character (for eg., whitespace), and all
    the remaining characters are left in the input buffer.

When the user presses enter, 2 things happen - \n gets inside the input buffer,
and the cursor moves to the next line.

*/