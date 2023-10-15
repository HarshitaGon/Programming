#include <stdio.h>

struct student {
    int roll_number;
    double marks1;
    double marks2;
    double marks3;
};

typedef struct student Student;

int main(void) {
    Student s1;
    printf("Enter the details of student 1:\n");

    printf("Roll Number: ");
    scanf("%d", &s1.roll_number);

    printf("Marks1: ");
    scanf("%lf", &s1.marks1);

    printf("Marks2: ");
    scanf("%lf", &s1.marks2);

    printf("Marks3: ");
    scanf("%lf", &s1.marks3);

    Student s2;
    printf("\nEnter the details of student 2:\n");

    printf("Roll Number: ");
    scanf("%d", &s2.roll_number);

    printf("Marks1: ");
    scanf("%lf", &s2.marks1);

    printf("Marks2: ");
    scanf("%lf", &s2.marks2);

    printf("Marks3: ");
    scanf("%lf", &s2.marks3);

    double marks_student1 = s1.marks1 + s1.marks2 + s1.marks3;
    double marks_student2 = s2.marks1 + s2.marks2 + s2.marks3;

    if (marks_student1 > marks_student2)
        printf("\nStudent 1 scored more than Student 2\n");
    else
        printf("\nStudent 2 scored more than Student 1\n");

    return 0;
}


/*

Enter the details of student 1 :-
Roll Number: 100
Marks1: 80.5
Marks2: 75.0
Marks3: 78.5

Enter the details of student 2 :-
Roll Number: 101
Marks1: 81.0
Marks2: 76.0
Marks3: 79.5

Student 2 scored more than Student 1

*/