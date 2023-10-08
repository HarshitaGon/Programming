#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* ptr1 = malloc(sizeof (int));
    int* ptr2 = malloc(sizeof (int));

    printf("Enter 2 integers: ");
    scanf("%d", ptr1);
    scanf("%d", ptr2);

    printf("%d + %d = %d\n", *ptr1, *ptr2, *ptr1 + *ptr2);

    free(ptr1);
    free(ptr2);

    return 0;
}

/*
Enter 2 integers: 5 7
5 + 7 = 12
*/