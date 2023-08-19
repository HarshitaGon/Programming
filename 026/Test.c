#include <stdio.h>

int main(void)
{
    int i = 0;

    // Assign the current value of i to x, and then increment i by 1.
    int x = i++;
    printf("x = %d\n", x);

    // Increment i by 1, and then assign the new value of i to x.
    int y = ++i;
    printf("y = %d\n", y);

    // When there is nothing else other than i++ in a statement, then i++ is the
    // same as ++i, i.e. only increment i by 1.
    // In this case, i++ is the same as ++i is the same as i = i + 1.
    i++;

    int z = ++i;
    printf("z = %d\n", z);

    ++i;

    int w = i++;
    printf("w = %d\n", w);

    printf("i = %d\n", i);

    return 0;
}