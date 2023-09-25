#include <stdio.h>
#include <stdbool.h>

bool is_even(int);

int main(void) {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    if (is_even(a))
        printf("%d is even\n", a);
    else
        printf("%d is odd\n", a);

    return 0;
}

bool is_even(int a) {
    if (a % 2 == 0)
        return true;
    else
        return false;
}



/*

Enter an integer: 4
4 is even

*/