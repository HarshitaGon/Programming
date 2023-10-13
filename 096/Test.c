#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    int* no_of_occurrences = (int*) calloc(10, sizeof (int));

    //calloc means malloc with intialize with 0, this case is only for 0.

    // int* no_of_occurrences = (int*) malloc(10 * sizeof (int));

    // for (int i = 0; i < 10; ++i) {
    //     no_of_occurrences[i] = 0;
    // }

    while (n > 0) {
        ++(no_of_occurrences[n % 10]);
        n = n / 10;
    }

    for (int i = 0; i < 10; ++i) {
        printf("| %d | %d |\n", i, no_of_occurrences[i]);
    }

    free(no_of_occurrences);

    return 0;
}



// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//     int n;
//     printf("Enter a non-negative integer: ");
//     scanf("%d", &n);

//     int* no_of_occurrences = (int*) malloc(10 * sizeof(int));

//     for (int i = 0; i < 10; ++i) {
//         *(no_of_occurrences + i) = 0;
//     }

//     while (n > 0) {
//         ++(*(no_of_occurrences + (n % 10)));
//         n = n / 10;
//     }

//     for (int i = 0; i < 10; ++i) {
//         printf("| %d | %d |\n", i, *(no_of_occurrences + i));
//     }

//     free(no_of_occurrences);

//     return 0;
// }



/*

Enter a non-negative integer: 1234

| 0 | 0 |
| 1 | 1 |
| 2 | 1 |
| 3 | 1 |
| 4 | 1 |
| 5 | 0 |
| 6 | 0 |
| 7 | 0 |
| 8 | 0 |
| 9 | 0 |

*/