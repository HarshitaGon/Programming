#include <stdio.h>

int main(void) {
  int r;
  printf("Enter the number of rows (odd) (>= 3): ");
  scanf("%d", &r);

  int n = (r + 1) / 2;
  int i = 1;

  while (i <= r) {
    int j = 1;

    while (j <= r) {
      if ((i + j == n + 1) || (i - j == n - 1) ||(j - i == n - 1)
                                            || (i + j == r + n))
        printf("* ");
      else
        printf("  ");

      ++j;
    }

    printf("\n");
    ++i;
  }

  return 0;
}



/*
    Enter the number of rows (odd) (>= 3): 7

          *
        *   *
      *       *
    *           *
      *       *
        *   *
          *
*/