#include <stdio.h>
#include <stdlib.h>

int max_arr(int*, int, int);

int main(void)
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int* arr = malloc(n * sizeof (int));
    printf("Enter %d integers: ", n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &(arr[i]));
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\nmaximum integer of array : %d\n", max_arr(arr, n, 0));

    free(arr);

    return 0;
}

int max_arr(int* ptr, int size, int i)
{
    if (i == size - 1)
    {
        return ptr[i];
    }

    else
    {
        int temp = max_arr(ptr, size, i + 1);

        return ptr[i] >= temp ? ptr[i] : temp;

        // if (ptr[i] >= temp)
        //     return ptr[i];
        // else
        //     return temp;
    }
}