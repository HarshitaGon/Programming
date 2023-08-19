#include <stdio.h>

int main(void) {
    int n;
    printf("Enter upper limit: ");
    scanf("%d", &n);

    int i = 1;

    while (i <= n) {
        printf("%d ", i);
        ++i;
    }

    printf("\n");

    return 0;
}


/*

Enter upper limit: 10
1 2 3 4 5 6 7 8 9 10

*/