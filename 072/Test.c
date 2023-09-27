#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int);

int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (is_palindrome(n))
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);

    return 0;
}

bool is_palindrome(int n) {
    int reverse = 0, temp = n;

    while (n > 0) {

        reverse = (reverse * 10) + (n % 10);
        n = n / 10;
    }

    // if (reverse == temp)
    //     return true;
    // else
    //     return false;

    return reverse == temp;
}


/*

1)
Enter a non-negative integer: 1234
1234 is not a palindrome

2)
Enter a non-negative integer: 1000
1000 is not a palindrome

3)
Enter a non-negative integer: 12321
12321 is a palindrome

*/