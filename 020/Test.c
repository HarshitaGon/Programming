#include <stdio.h>

int main(void) {
    int remaining_amount;
    printf("Enter an amount: Rs. ");
    scanf("%d", &remaining_amount);

    printf("\nThe notes requried are :-\n");

    printf("2000: %d\n", remaining_amount / 2000);

    remaining_amount = remaining_amount % 2000;
    printf("500: %d\n", remaining_amount / 500);

    remaining_amount = remaining_amount % 500;
    printf("200: %d\n", remaining_amount / 200);

    remaining_amount = remaining_amount % 200;
    printf("100: %d\n", remaining_amount / 100);

    remaining_amount = remaining_amount % 100;
    printf("50: %d\n", remaining_amount / 50);

    remaining_amount = remaining_amount % 50;
    printf("20: %d\n", remaining_amount / 20);

    remaining_amount = remaining_amount % 20;
    printf("10: %d\n", remaining_amount / 10);

    remaining_amount = remaining_amount % 10;
    printf("5: %d\n", remaining_amount / 5);

    remaining_amount = remaining_amount % 5;
    printf("2: %d\n", remaining_amount / 2);

    remaining_amount = remaining_amount % 2;
    printf("1: %d\n", remaining_amount / 1);

    return 0;
}

/*

Enter an amount: Rs. 5423

The notes required are :-
2000: 2
500: 2
200: 2
100: 0
50: 0
20: 1
10: 0
5: 0
2: 1
1: 1

*/