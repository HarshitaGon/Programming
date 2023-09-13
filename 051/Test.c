#include <stdio.h>

int main(void) {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    int term1 = 0, term2 = 1;

    while (terms > 0) {
        printf("%d ", term1);

        int next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;
        
        --terms;
    }

    printf("\n");

    return 0;
}