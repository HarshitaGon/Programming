#include <stdio.h>

int main(void) {
    int x[10];
    printf("Enter 10 integers: ");

    for (int i = 0; i < 10; ++i) {
        scanf("%d", (x + i));
    }

    for (int i = 0; i < 10; ++i) {
        if (*(x + i) > 0)
            printf("%d ", *(x + i));
    }

    printf("\n");

    return 0;
}


/*

1)
Enter 10 integers: 1 0 -2 3 4 -5 -7 8 9 5
1 3 4 8 9 5

2)
Enter 10 integers: -1 0 0 -1 -2 -3 0 -4 -5 0


*/