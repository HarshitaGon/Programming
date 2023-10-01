#include <stdio.h>

// void func(int[]); // This is confusing, because even though [] is used, it is
// actually a * (i.e. a pointer).
// So, whenever you are declaring a function which takes an array as an
// argument, never declare the parameter with [], as it will be confusing.
// Always declare the parameter with *.
void func(int*);

int main(void)
{
    int arr[10];

    // Due to exception 1, arr is not converted to pointer
    printf("Size of the array is %zu bytes\n", sizeof arr);
    printf("Size of the first element is %zu\n", sizeof arr[0]);

    printf("The starting address of the entire array is %p\n", (void*) &arr);
    printf("The starting address of the first element is %p\n", (void*) &(arr[0]));

    func(arr);

    return 0;
}

void func(int* arr)
{
    printf("Size of the array inside a function is %zu bytes\n", sizeof arr);
}