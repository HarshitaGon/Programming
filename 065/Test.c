#include <stdio.h>

int main(void) {
    int r;
    printf("Enter the number of rows (odd): ");
    scanf("%d", &r);

    int i = 1;
    while (i <= r) {
        int j = 1;

        while (j <= r - i) {
            printf("  ");
            ++j;
        }

        j = 1;

        while (j <= i) {
            printf("%c ", (j + 'A' -1));
            ++j;
        }

        j = i - 1;

        while (j > 0) {
            printf("%c ", (j + 'A' -1));
            --j;
        }

        printf("\n");
        ++i;
    }
    ////////////////////////////////////////////////////////
    i = r - 1;

    while (i > 0) {
        int j = 1;

        while (j <= r - i) {
            printf("  ");
            ++j;
        }

        j = 1;

        while (j <= i) {
            printf("%c ", (j + 'A' -1));
            ++j;
        }

        j = i - 1;

        while (j > 0) {
            printf("%c ", (j + 'A' -1));
            --j;
        }

        printf("\n");
        --i;
    }

}


/*
    Enter the number of rows (odd): 7

          A
        A B A
      A B C B A
    A B C D C B A
      A B C B A
        A B A
          A
*/