#include <stdio.h>
#include <stdlib.h>

int find_index(int*, int, int);

int main(void) {
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

    int index = find_index(arr, n, element_to_search);

    if (index == -1)
        printf("%d not found\n", element_to_search);
    else
        printf("%d found at index %d\n", element_to_search, index);

    free(arr);

    return 0;
}

int find_index(int* arr, int n, int target) {
    int index = -1;

    for (int i = 0; i < n; ++i) {
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



// #include <stdio.h>
// #include <stdlib.h>

// int find_index(int*, int, int);

// int main(void) {
//     int n;
//     printf("Enter the no. of integers: ");
//     scanf("%d", &n);

//     int* arr = (int*) malloc(n * sizeof (int));
//     printf("Enter %d integers: ", n);

//     for (int i = 0; i < n; ++i) {
//         scanf("%d", arr + i);
//     }

//     int element_to_search;
//     printf("Enter element to be searched: ");
//     scanf("%d", &element_to_search);

//     int index = find_index(arr, n, element_to_search);

//     if (index == -1)
//         printf("%d not found\n", element_to_search);
//     else
//         printf("%d found at index %d\n", element_to_search, index);

//     free(arr);

//     return 0;
// }

// int find_index(int* arr, int n, int target) {
//     int index = -1;

//     for (int i = 0; i < n; ++i) {
//         if (target == *(arr + i)) {
//             index = i;
//             break;
//         }
//     }

//     return index;
// }



