#include <stdio.h>
#include <stdlib.h>

int linear_search(int*, int, int, int);

int main(void)
{
    int n;
    printf("Enter the no. of integers: ");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof (int));
    printf("Enter %d integers: ", n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &(arr[i]));
    }

    int element_to_search;
    printf("Enter element to be searched: ");
    scanf("%d", &element_to_search);

    int index = linear_search(arr, n, element_to_search, 0);

    if (index == -1)
        printf("%d not found\n", element_to_search);
    else
        printf("%d found at index %d\n", element_to_search, index);

    free(arr);

    return 0;
}

int linear_search(int* arr, int n, int target, int starting_index)
{
    if (starting_index == n)
    {
        return -1;
    }

    else if (arr[starting_index] == target)
    {
        return starting_index;
    }

    else
    {
        return linear_search(arr, n, target, starting_index + 1);
    }
}