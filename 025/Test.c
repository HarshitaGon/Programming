#include <stdio.h>

int main(void) {
    double p, c, m, e, cs;
    printf("Enter marks in 5 subject: ");
    scanf("%lf", &p);
    scanf("%lf", &c);
    scanf("%lf", &m);
    scanf("%lf", &e);
    scanf("%lf", &cs);

    double avg = (p + c + m + e + cs) / 5.0;

    if (avg < 50)
        printf("The grade is F\n");
    else if (avg < 60)
        printf("The grade is E\n");
    else if (avg < 70)
        printf("The grade is D\n");
    else if (avg < 80)
        printf("The grade is c\n");
    else if (avg < 90)
        printf("The grade is B\n");
    else
        printf("The grade is A\n");

    return 0;
}




/*

Enter marks in 5 subjects: 72.5 80 91 76 93.5
The grade is B

*/

/*

If average marks >= 90.0, then A
                 >= 80.0, then B
                 >= 70.0, then C
                 >= 60.0, then D
                 >= 50.0, then E
                 Else, F

*/

/*

Do this without using equality.

*/