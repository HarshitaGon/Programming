// #include <stdio.h>

// void print_sum(int, int); // function prototype, aka function declaration

// int main(void)
// {
//     int a, b;
//     printf("Enter 2 integers: ");
//     scanf("%d", &a);
//     scanf("%d", &b);

//     print_sum(a, b);

//     return 0;
// }

// void print_sum(int a, int b) // function definition
// {
//     printf("Their sum is %d\n", a + b);
// }

#include <stdio.h>

int sum(int, int); // function prototype, aka function declaration

int main(void)
{
    int a, b;
    printf("Enter 2 integers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Their sum is %d\n", sum(a, b));

    return 0;
}

int sum(int a, int b) // function definition
{
    return a + b;
}

/*

When an automatic variable is directly declared inside a function, then it gets
destroyed when that function returns.

When an automatic variable is declared inside if/else, then it gets destroyed
when that if/else ends, or when the function returns prematurely.

When an automatic variable is declared inside a loop, then it gets destroyed
when the current iteration ends, or when the function returns prematurely.