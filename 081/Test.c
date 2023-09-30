// 1 question on double and triple pointers
// Predict the output :-

#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, c = 30;

    int* x = &a;
    *x = 15;

    printf("%d %d %d\n", a, b, c);

    int** y = &x;
    *y = &b;
    *x = 25;

    printf("%d %d %d\n", a, b, c);

    x = &c;
    **y = 35;

    printf("%d %d %d\n", a, b, c);

    return 0;
}