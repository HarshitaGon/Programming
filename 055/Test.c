#include <stdio.h>

int main(void) {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("\n");

    int i = 1;

    while (i <= n) {
        int j = 1;

        while(j <= n * 2 - 1) {
            if ((i > j) || (i + j > n * 2))
                printf("  ");
            else
                printf("* ");

            ++j;
        }

        printf("\n");
        ++i;
    }
}



/*

Enter the number of rows: 5

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/