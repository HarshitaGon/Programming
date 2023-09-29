#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter 2 integers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    int* ptr_a = &a; //pointer to integer data type
    int* ptr_b = &b;

    printf("%d + %d = %d\n", a, b, (*ptr_a + *ptr_b));

    return 0;
}


/*
    Enter 2 integers: 5 7
    5 + 7 = 12
*/