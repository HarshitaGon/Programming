#include <stdio.h>

int find_index(int*, int);

int main(void) {
    int arr[5];
    printf("Enter 5 integers: ");

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &(arr[i]));
    }

    int element_to_search;
    printf("Enter element to be searched: ");
    scanf("%d", &element_to_search);

    int index = find_index(arr, element_to_search);

    if (index == -1)
        printf("%d not found\n", element_to_search);
    else
        printf("%d found at index %d\n", element_to_search, index);

    return 0;
}

int find_index(int* arr, int target) {
    int index = -1;

    for (int i = 0; i < 5; ++i) {
        if (target == arr[i]) {
            index = i;
            break;
        }
    }

    return index;
}



/*

1)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 4

4 found at index 3

2)
Enter 5 integers: 1 2 3 4 5
Enter element to be searched: 6

6 not found

*/
