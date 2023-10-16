#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll_number;
    double marks1;
    double marks2;
    double marks3;
};

typedef struct student Student;

int main(void) {
    Student* ptr = (Student*) malloc(sizeof (Student));

    printf("Enter the details of student:\n");

    printf("Roll number: ");
    scanf("%d", &(ptr->roll_number));

    printf("Marks1: ");
    scanf("%lf", &(ptr->marks1));

    printf("Marks2: ");
    scanf("%lf", &(ptr->marks2));


    printf("Marks3: ");
    scanf("%lf", &(ptr->marks3));

    printf("\nroll number: %d\n", ptr->roll_number);
    printf("marks1: %f\n", ptr->marks1);
    printf("marks2: %f\n", ptr->marks2);
    printf("marks3: %f\n", ptr->marks3);

    free((void*) ptr);

    return 0;
}

/*
    The -> operator of C is equivalent to the . operator of Java.

    There is no equivalent of C's . operator in Java.
*/



// #include <stdio.h>
// #include <stdlib.h>

// struct student {
//     int roll_number;
//     double marks1;
//     double marks2;
//     double marks3;
// };

// typedef struct student Student;

// int main(void) {
//     Student* ptr = (Student*) malloc(sizeof (Student));

//     printf("Enter the details of student:\n");

//     printf("Roll number: ");
//     scanf("%d", &(ptr->roll_number));

//     printf("Marks1: ");
//     scanf("%lf", &(ptr->marks1));

//     printf("Marks2: ");
//     scanf("%lf", &(ptr->marks2));


//     printf("Marks3: ");
//     scanf("%lf", &(ptr->marks3));

//     printf("\nroll number: %d\n", ptr->roll_number);
//     printf("marks1: %f\n", ptr->marks1);
//     printf("marks2: %f\n", ptr->marks2);
//     printf("marks3: %f\n", ptr->marks3);

//     free(ptr);

//     return 0;
// }




/* using heap memory:

Enter the details of student :-
Roll Number: 100
Marks1: 81.5
Marks2: 88.0
Marks3: 90.5

Roll Number: 100
Marks1: 81.5
Marks2: 88.0
Marks3: 90.5

*/
