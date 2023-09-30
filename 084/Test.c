#include <stdio.h>

int main(void) {
    int x[5];
    printf("Enter 5 integers: ");

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &x[i]);
    }

    int sum = 0;

    for (int i = 0; i < 5; ++i) {
        sum = sum + x[i];
    }

    printf("Their sum is %d\n", sum);

    return 0;
}

/*
Enter 5 integers: 3 4 2 1 5
Their sum is 15
*/