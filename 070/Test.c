#include <stdio.h>

int calculate_sum(int, int);

int main(void) {
    int ll, ul;
    printf("Enter lower and upper limits: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    printf("The sum is %d\n", calculate_sum(ll, ul));

    return 0;
}

int calculate_sum(int ll, int ul) {
    int sum = 0;

    while (ll <= ul) {
        sum = sum + ll;
        ++ll;
    }

    return sum;
}



/*
Enter lower and upper limits: 5 10
The sum is 45
*/