#include <stdio.h>

int main(void) {
    int ll, ul;
    printf("Enter lower and upper limits: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    int sum = 0;

    while (ll <= ul) {
        sum = sum + ll;
        ++ll;
    }

    printf("The sum is %d\n", sum);

    return 0;
}



/*
Enter lower and upper limits: 5 10
The sum is 45
*/