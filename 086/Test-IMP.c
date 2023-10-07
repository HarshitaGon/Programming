/*

An array name gets converted to a pointer to its first element, except for
1. sizeof operator
2. address of (&) operator
3. alignof operator
4. string literal used for initialization (for eg., char a[] = "hello")

For eg.,
a[2] -> *(a + 2) -> *((int*) 100 + 2) -> *(108)

*/


#include <stdio.h>

int main(void) {
    int x;
    printf("Enter a non-negative integer: ");
    scanf("%d", &x);

    int no_of_occurrences[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (x > 0) {
        ++(*(no_of_occurrences + (x % 10)));
        x = x / 10;
    }

    for (int i = 0; i < 10; ++i) {
        printf("| %d | %d |\n", i, *(no_of_occurrences + i));
    }

    return 0;
}

/* see in question no. 43 then its had solved by switch case/ if-else*/

/*

Enter a non-negative integer: 1234

| 0 | 0 |
| 1 | 1 |
| 2 | 1 |
| 3 | 1 |
| 4 | 1 |
| 5 | 0 |
| 6 | 0 |
| 7 | 0 |
| 8 | 0 |
| 9 | 0 |

*/