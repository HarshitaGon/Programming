#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter the no. of integers: ");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof(int));
    printf("Enter %d integers: ", n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &(arr[i]));
    }

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum = sum + arr[i];
    }

    printf("Their sum is %d\n", sum);

    free(arr);

    return 0;
}



// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//     int n;
//     printf("Enter the no. of integers: ");
//     scanf("%d", &n);

//     int* arr = (int*) malloc(n * sizeof(int));
//     printf("Enter %d integers: ", n);

//     for (int i = 0; i < n; ++i) {
//         scanf("%d", arr + i);
//     }

//     int sum = 0;

//     for (int i = 0; i < n; ++i) {
//         sum = sum + *(arr + i);
//     }

//     printf("Their sum is %d\n", sum);

//     free(arr);

//     return 0;
// }

/*
Enter the no. of integers:
Enter 5 integers: 3 4 2 1 5
Their sum is 15
*/