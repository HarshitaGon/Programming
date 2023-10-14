/* reversing an array */


#include <stdio.h>
#include <stdlib.h>

void reverse(int*, int);
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

    reverse(arr, n);

    printf("After reversing an array: ");

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    free(arr);

    printf("\n");

    return 0;
}

void reverse(int* arr, int n) {
    for (int i = 0; i < n / 2; ++i) {
        // int temp = arr[i];
        // arr[i] = arr[9 - i];
        // arr[9 - i] = temp;

        swap(&(arr[i]), &(arr[(n - 1) - i]));
    }
}

void swap(int* ptr_a, int* ptr_b) {
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}




// #include <stdio.h>
// #include <stdlib.h>

// void reverse(int*, int);
// void swap(int*, int*);

// int main(void) {
//     int n;
//     printf("Enter the no. of integers: ");
//     scanf("%d", &n);

//     int* arr = (int*) malloc(n * sizeof (int));
//     printf("Enter %d integers: ", n);

//     for (int i = 0; i < n; ++i) {
//         scanf("%d", arr + i);
//     }

//     reverse(arr, n);

//     printf("After reversing an array: ");

//     for (int i = 0; i < n; ++i) {
//         printf("%d ", *(arr + i));
//     }

//     free(arr);

//     printf("\n");

//     return 0;
// }

// void reverse(int* arr, int n) {
//     for (int i = 0; i < n / 2; ++i) {
//         // int temp = arr[i];
//         // arr[i] = arr[9 - i];
//         // arr[9 - i] = temp;

//         swap(arr + i, arr + (n - 1 - i));
//     }
// }

// void swap(int* ptr_a, int* ptr_b) {
//     int temp = *ptr_a;
//     *ptr_a = *ptr_b;
//     *ptr_b = temp;
// }