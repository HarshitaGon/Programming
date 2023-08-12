#include <stdio.h>

int main(void) {
    /*int n1, n2, n3, n4, n5;
    printf("Enter 5 positive integers: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    int largest = n1;
    
    if (n2 > largest)
        largest = n2;
    
    if (n3 > largest)
        largest = n3;

    if (n4 > largest)
        largest = n4;

    if (n5 > largest)
        largest = n5;

    printf("%d is the largest\n", largest);

    return 0;
}*/
    
    int n;
    printf("Enter 5 positive integers: ");
    scanf("%d", &n);

    int largest = 0;

    if (n > largest)
        largest = n;

    scanf("%d", &n);

    if (n > largest)
        largest = n;

    scanf("%d", &n);

    if (n > largest)
        largest = n;
    
    scanf("%d", &n);

    if (n > largest)
        largest = n;

    scanf("%d", &n);

    if (n > largest)
        largest = n;

    printf("%d is the largest\n", largest);

    return 0;
}
