#include <stdio.h>

void swap(int*, int*);

int main(void)
{
    int a = 5, b = 10;
    printf("Before swapping, a = %d and b = %d\n", a, b);

    swap(&a, &b);
    printf("After swapping, a = %d and b = %d\n", a, b);

    return 0;
}

void swap(int* ptr_a, int* ptr_b)
{
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}