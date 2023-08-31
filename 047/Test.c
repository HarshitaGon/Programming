#include <stdio.h>

int main(void) {
    int n1, n2;
    printf("Enter 2 positive integers: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    int i = 1, hcf = 0;

    if (n1 > n2) {
        while (i <= n2) {
            if ((n2 % i == 0) && (n1 % i == 0))
                hcf = i;
            ++i;
        }

        printf("HCF = %d\n", hcf);
    }

    else {
        while (i <= n1) {
            if ((n2 % i == 0) && (n1 % i == 0))
                hcf = i;
            ++i;
        }

        printf("HCF = %d\n", hcf);
    }

    return 0;
}