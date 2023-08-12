#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if ((n % 5 == 0) && (n % 11 == 0))
        printf("%d is divisible by both 5 and 11\n", n);
    else if (n % 5 == 0)
        printf("%d is divisible by 5\n", n);
    else if (n % 11 == 0)
        printf("%d is divisible by 11\n", n);
    else
        printf("%d is neither divisible by 5 nor 11\n", n);

    return 0;
}




/*

1)
Enter a positive integer: 10
10 is divisible by 5

2)
Enter a positive integer: 22
22 is divisible by 11

3)
Enter a positive integer: 55
55 is divisible by both 5 and 11

4)
Enter a positive integer: 6
6 is neither divisible by 5 nor by 11

*/