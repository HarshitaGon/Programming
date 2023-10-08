#include <stdio.h>
#include <stdlib.h>

int* func(void);

int main(void)
{
    int* ptr = func();
    printf("%d\n", *ptr);

    free(ptr);

    return 0;
}

int* func(void)
{
    int* ptr1 = malloc(sizeof (int));
    *ptr1 = 10;

    return ptr1;
}