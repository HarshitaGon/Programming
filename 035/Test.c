#include <stdio.h>

int main(void) {
    int ll, ul;
    printf("Enter lower and upper limits: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    int sum = 0;

    if (ll == ul) {
        printf("%d", ll);
    }

    else {
        while (ll < ul) {
            sum = sum + ll;
            printf("%d + ", ll);
            ++ll;
        }

        printf("%d", ul);
    }

    printf(" = %d\n", sum + ul);

    return 0;
}


/*

Enter lower and upper limits: 7 15
7 + 8 + 9 + 10 + 11 + 12 + 13 + 14 + 15 = 99

*/