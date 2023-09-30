#include <stdio.h>

int main(void) {
    int arr[5];
    printf("Enter 5 integers: ");

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &arr[i]);
    }

    int max_no = arr[0];
    int min_no = arr[0];

    for (int i = 1; i < 5; ++i) {
        if (arr[i] > max_no)
            max_no = arr[i];

        else integersf (arr[i] < min_no)
            min_no = arr[i];
    }

    printf("The maximum no. is %d\n", max_no);
    printf("The minimum no. is %d\n", min_no);

    return 0;
}

/*
Enter 5 integers: 4 5 3 2 4
The maximum no. is 5
The minimum no. is 2
*/