#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    int reverse = 0, temp = n;

    while (n > 0) {
        reverse = (reverse * 10) + (n % 10);
        n = n / 10;
    }

    if (reverse == temp)
        printf("%d is a palindrome\n", temp);
    else
        printf("%d is not a palindrome\n", temp);

    return 0;
}