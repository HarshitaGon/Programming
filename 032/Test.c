#include <stdio.h>

int main(void) {
    int ll, ul;
    printf("Enter lower and upper limits: ");
    scanf("%d", &ll);
    scanf("%d", &ul);

    // int start;
    // if (ll % 2 == 0)
    //     start = ll;
    // else
    //     start = ll + 1;

    int start = ll + (ll % 2);
    int end = ul - (ul % 2);
    
    return 0;
}

/*

Enter lower and upper limits: 7 15
8, 10, 12 and 14

*/