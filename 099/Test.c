#include <stdio.h>

struct student {
    int roll_number;
    double marks1;
    double marks2;
    double marks3;
};

typedef struct student Student;

int main(void) {
    Student s;

    printf("Enter the details of student:\n");

    printf("Roll number: ");
    scanf("%d", &s.roll_number);

    printf("Marks1: ");
    scanf("%lf", &s.marks1);

    printf("Marks2: ");
    scanf("%lf", &s.marks2);


    printf("Marks3: ");
    scanf("%lf", &s.marks3);

    printf("\nroll number: %d\n", s.roll_number);
    printf("marks1: %f\n", s.marks1);
    printf("marks2: %f\n", s.marks2);
    printf("marks3: %f\n", s.marks3);

    return 0;
}


/*

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
