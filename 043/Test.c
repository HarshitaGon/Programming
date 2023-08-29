#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0,
        c8 = 0, c9 = 0;

    while (n > 0) {
        switch (n % 10) {
            case 0:
                c0++;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                c5++;
                break;
            case 6:
                c6++;
                break;
            case 7:
                c7++;
                break;
            case 8:
                c8++;
                break;
            default:
                c9++;
        }

        n = n / 10;
    }

    printf("\n");
    printf("| 0 | %d |\n", c0);
    printf("| 1 | %d |\n", c1);
    printf("| 2 | %d |\n", c2);
    printf("| 3 | %d |\n", c3);
    printf("| 4 | %d |\n", c4);
    printf("| 5 | %d |\n", c5);
    printf("| 6 | %d |\n", c6);
    printf("| 7 | %d |\n", c7);
    printf("| 8 | %d |\n", c8);
    printf("| 9 | %d |\n", c9);

    return 0;
}



/*

int a = 3;

switch (a)
{
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
    ...


}

*/