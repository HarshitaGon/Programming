#include <stdio.h>
#include <stdlib.h>

void reverse(int*, int, int);
void swap(int*, int*);

int main(void) {
    int n;
    printf("Enter the no. of integers: ");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof (int));
    printf("Enter %d integers: ", n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &(arr[i]));
    }

    reverse(arr, 0, n - 1);

    printf("After reversing an array: ");

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    free(arr);

    printf("\n");

    return 0;
}

void reverse(int* arr, int i, int j)
{
    if (i < j)
    {
        swap(&(arr[i]), &(arr[j]));
        reverse(arr, i + 1, j - 1);
    }
}

// void reverse(int* arr, int n, int i)
// {
//     if (i == n / 2)
//     {
//         return;
//     }

//     else
//     {
//         swap(&(arr[i]), &(arr[n-1-i]));
//         reverse(arr, n, i + 1);
//     }
// }

void swap(int* ptr_a, int* ptr_b)
{
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}
