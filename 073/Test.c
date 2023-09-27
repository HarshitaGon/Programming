#include <stdio.h>

int find_factorial(int);

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, find_factorial(n));

    return 0;
}

int find_factorial(int n) {
    int factorial = 1;

    while (n > 0) {
        factorial = factorial * n;
        --n;
    }
    
    return factorial;
}