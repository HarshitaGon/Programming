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

    int max_no = arr[0];
    int min_no = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_no)
            max_no = arr[i];

        else if (arr[i] < min_no)
            min_no = arr[i];
    }

    printf("The maximum no. is %d\n", max_no);
    printf("The minimum no. is %d\n", min_no);

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

//     int max_no = *(arr + 0);
//     int min_no = *(arr + 0);

//     for (int i = 1; i < n; ++i) {
//         if (*(arr + i) > max_no)
//             max_no = *(arr + i);

//         else if (*(arr + i) < min_no)
//             min_no = *(arr + i);
//     }

//     printf("The maximum no. is %d\n", max_no);
//     printf("The minimum no. is %d\n", min_no);

//     free(arr);

//     return 0;
// }



/*
Enter 5 integers: 4 5 3 2 4
The maximum no. is 5
The minimum no. is 2
*/