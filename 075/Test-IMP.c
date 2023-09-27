#include <stdio.h>
#include <stdbool.h>

bool is_prime(int);

int main(void) {
    int n;
    printf("Enter a positive integer (>= 2): ");
    scanf("%d", &n);

    printf("Prime factors - ");

    int i = 1;

    while (i <= n) {
        if ((n % i == 0) && (is_prime(i)))
            printf("%d ", i);

        ++i;
    }

    printf("\n");

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
  1)
  Enter a positive integer (>= 2): 15
  Prime factors - 3 5

  2)
  Enter a positive integer (>= 2): 48
  Prime factors - 2 3
*/


