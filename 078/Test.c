// #include <stdio.h>

// double calculate_area(double, double);

// int main(void)
// {
//     double l, b;
//     printf("Enter the length and breadth: ");
//     scanf("%lf", &l);
//     scanf("%lf", &b);

//     double area = calculate_area(l, b);

//     printf("Area of rectangle is %g\n", area);

//     return 0;
// }

// double calculate_area(double l, double b)
// {
//     return l * b;
// }


#include <stdio.h>

void calculate_area(double*, double, double);

int main(void)
{
    double l, b;
    printf("Enter the length and breadth: ");
    scanf("%lf", &l);
    scanf("%lf", &b);

    double area;
    calculate_area(&area, l, b);

    printf("Area of rectangle is %g\n", area);

    return 0;
}

void calculate_area(double* ptr_area, double l, double b)
{
    *ptr_area = l * b;
}