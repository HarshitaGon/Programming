#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int);
bool is_armstrong(int);

int main(void) {
    int ll, ul;
    printf("Enter lower and upper limts: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    while (ll <= ul) {
        if (is_armstrong(ll) && is_prime(ll))
            printf("%d is prime as well as armstrong\n", ll);
        else if (is_armstrong(ll))
            printf("%d is only armstrong\n", ll);
        else if (is_prime(ll))
            printf("%d is only prime\n", ll);
        else
            printf("%d is neither prime nor armstrong\n", ll);

        ++ll;
    }

    return 0;
}

bool is_armstrong(int i) {
    int digits = 0, temp1 = i, temp2 = i;

    while (i > 0) {
        i = i / 10;
        ++digits;
    }

    int sum = 0;

    while (temp1 > 0) {
        int last_digit = temp1 % 10;
        sum = sum + (int) pow((double) last_digit, (double) digits);
        temp1 = temp1 / 10;
    }

    return sum == temp2;
}

bool is_prime(int i) {
    if (i == 1) {
        return false;
    }

    else {
        int j = 2, count = 2;

        while (j * j <= i) {
            if (i % j == 0) {
                ++count;
                break;
            }

            ++j;
        }

        return count == 2;
    }
}



/*

Enter lower and upper limits (> 1): 7 13

7 is prime as well as armstrong
8 is only armstrong
9 is only armstrong
10 is neither prime nor armstrong
11 is only prime
12 is neither prime nor armstrong
13 is only prime

*/