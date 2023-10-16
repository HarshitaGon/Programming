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
    Student* ptr1 = (Student*) malloc(sizeof (Student));
    printf("Enter the details of student 1:\n");

    printf("Roll Number: ");
    scanf("%d", &(ptr1->roll_number));

    printf("Marks1: ");
    scanf("%lf", &(ptr1->marks1));

    printf("Marks2: ");
    scanf("%lf", &(ptr1->marks2));

    printf("Marks3: ");
    scanf("%lf", &(ptr1->marks3));

    Student* ptr2 = (Student*) malloc(sizeof (Student));
    printf("\nEnter the details of student 2:\n");

    printf("Roll Number: ");
    scanf("%d", &(ptr2->roll_number));

    printf("Marks1: ");
    scanf("%lf", &(ptr2->marks1));

    printf("Marks2: ");
    scanf("%lf", &(ptr2->marks2));

    printf("Marks3: ");
    scanf("%lf", &(ptr2->marks3));

    double marks_student1 = (ptr1->marks1) + (ptr1->marks2) + (ptr1->marks3);
    double marks_student2 = (ptr2->marks1) + (ptr2->marks2) + (ptr2->marks3);

    if (marks_student1 > marks_student2)
        printf("\nStudent 1 scored more than Student 2\n");
    else
        printf("\nStudent 2 scored more than Student 1\n");

    free(ptr1);
    free(ptr2);

    return 0;
}




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
//     Student* ptr1 = (Student*) malloc(sizeof (Student));
//     printf("Enter the details of student 1:\n");

//     printf("Roll Number: ");
//     scanf("%d", &((*ptr1).roll_number));

//     printf("Marks1: ");
//     scanf("%lf", &((*ptr1).marks1));

//     printf("Marks2: ");
//     scanf("%lf", &((*ptr1).marks2));

//     printf("Marks3: ");
//     scanf("%lf", &((*ptr1).marks3));

//     Student* ptr2 = (Student*) malloc(sizeof (Student));
//     printf("\nEnter the details of student 2:\n");

//     printf("Roll Number: ");
//     scanf("%d", &((*ptr2).roll_number));

//     printf("Marks1: ");
//     scanf("%lf", &((*ptr2).marks1));

//     printf("Marks2: ");
//     scanf("%lf", &((*ptr2).marks2));

//     printf("Marks3: ");
//     scanf("%lf", &((*ptr2).marks3));

//     double marks_student1 = (*ptr1).marks1 + (*ptr1).marks2 + (*ptr1).marks3;
//     double marks_student2 = (*ptr2).marks1 + (*ptr2).marks2 + (*ptr2).marks3;

//     if (marks_student1 > marks_student2)
//         printf("\nStudent 1 scored more than Student 2\n");
//     else
//         printf("\nStudent 2 scored more than Student 1\n");

//     free(ptr1);
//     free(ptr2);

//     return 0;
// }


/* using heap memory:

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