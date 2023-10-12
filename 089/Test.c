/* reversing an array */


#include <stdio.h>

void reverse(int*);
void swap(int*, int*);

int main(void) {
    int arr[10];
    printf("Enter 10 integers: ");

    for (int i = 0; i < 10; ++i) {
        scanf("%d", &(arr[i]));
    }

    reverse(arr);

    printf("After reversing an array: ");

    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

void reverse(int* arr) {
    for (int i = 0; i < 10 / 2; ++i) {
        // int temp = arr[i];
        // arr[i] = arr[9 - i];
        // arr[9 - i] = temp;

        swap(&(arr[i]), &(arr[9 - i]));
    }
}

void swap(int* ptr_a, int* ptr_b) {
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}



// #include <stdio.h>

// int main(void) {
//     int arr[10];
//     printf("Enter 10 integers: ");

//     for (int i = 0; i < 10; ++i) {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < 10 / 2; ++i) {
//         int temp = arr[i];
//         arr[i] = arr[9 - i];
//         arr[9 - i] = temp;
//     }

//     printf("After reversing an array: ");

//     for (int i = 0; i < 10; ++i) {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");

//     return 0;
// }




// #include <stdio.h>

// int main(void) {
//     int arr[10];
//     printf("Enter 10 integers: ");

//     for (int i = 0; i < 10; ++i) {
//         scanf("%d", arr + i);
//     }

//     for (int i = 0; i < 10 / 2; ++i) {
//         int temp = *(arr + i);
//         *(arr + i) = *(arr + (9 - i));
//         *(arr + (9 - i)) = temp;
//     }

//     printf("After reversing an array: ");

//     for (int i = 0; i < 10; ++i) {
//         printf("%d ", *(arr + i));
//     }

//     printf("\n");

//     return 0;
// }