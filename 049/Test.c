#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("1 is an armstrong number");
    }

    else {
        int no_digits = (int) log10((double) n) + 1;

        int sum = 0, temp = n;

        while (temp > 0) {
            int last_d = temp % 10;
            sum = sum + (int) pow((double) last_d, (double) no_digits);
            temp = temp / 10;
        }

        if (sum == n)
            printf("%d is an armstrong number\n", n);
        else
            printf("%d is not an armstrong number\n", n);
    }

    return 0;
}