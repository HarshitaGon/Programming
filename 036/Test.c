#include <stdio.h>

int main(void) {
    int ll, ul;
    printf("Enter lower and upper limits: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    ll = ll + (ll % 2);
    ul = ul - (ul % 2);

    int sum = 0;

    printf("\nSum of even numbers -\n");

    while (ll < ul) {
        sum = sum + ll;
        printf("%d + ", ll);
        ll = ll + 2;
    }

    printf("%d = %d\n", ul, sum + ul);

    return 0;
}