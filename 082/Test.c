// #include <stdio.h>

// int main(void) {
//     int x[5];
//     printf("Enter 5 integers: ");

//     for (int i = 0; i < 5; ++i) {
//         scanf("%d", &x[i]);
//     }

//     for (int i = 0; i < 5; ++i) {
//         printf("%d ", x[i]);
//     }

//     printf("\n");

//     return 0;
// }

#include <stdio.h>

int main(void) {
    int x[5];
    printf("Enter 5 integers: ");

    for (int i = 0; i < 5; ++i) {
        scanf("%d", x + i);
    }

    for (int i = 0; i < 5; ++i) {
        printf("%d ", *(x + i));
    }

    printf("\n");

    return 0;
}


/*
Enter 5 integers: 10 20 30 40 50
10 20 30 40 50
*/