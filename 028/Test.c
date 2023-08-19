#include <stdio.h>

int main(void) {
    int ul, ll;
    printf("Enter the upper and lower limits: ");
    scanf("%d", &ul);
    scanf("%d", &ll);

    while (ul >= ll) {
        printf("%d ", ul);
        --ul;
    }

    printf("\n");

    return 0;
}