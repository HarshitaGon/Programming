#include <stdio.h>

int main(void) {
    int ll, ul;
    printf("Enter lower and upper limits: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    while (ll < ul) {
        printf("%d, ", ll);
        ++ll;
    }

    printf("%d\n", ul);

    return 0;
}


/*

1)
Enter lower and upper limits: 5 5
5

2)
Enter lower and upper limits: 5 6
5, 6

3)
Enter lower and upper limits: 5 10
5, 6, 7, 8, 9, 10

4)
Enter lower and upper limits: 7 9
7, 8, 9

*/