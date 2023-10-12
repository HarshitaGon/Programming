#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter the no. of integers: ");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof (int));
    printf("Enter %d integers: ", n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0)
            printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}



// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//     int n;
//     printf("Enter the no. of integers: ");
//     scanf("%d", &n);

//     int* arr = (int*) malloc(n * sizeof (int));
//     printf("Enter %d integers: ", n);

//     for (int i = 0; i < n; ++i) {
//         scanf("%d", arr + i);
//     }

//     for (int i = 0; i < n; ++i) {
//         if (arr[i] > 0)
//             printf("%d ", *(arr + i));
//     }

//     printf("\n");

//     free(arr);

//     return 0;
// }


/*

1)
Enter the no. of integers:
Enter 10 integers: 1 0 -2 3 4 -5 -7 8 9 5
1 3 4 8 9 5

2)
Enter the no. of integers: 10
Enter 10 integers: -1 0 0 -1 -2 -3 0 -4 -5 0


*/