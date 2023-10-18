/*
    arr is a pointer to pointer to Student on Stack.
    arr stores the address of the first element of an array of pointers to Student
    on the heap.
    Every element of this array points to a Student variable on the heap.
*/

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
    int n;
    printf("Enter the no. of students: ");
    scanf("%d", &n);

    Student** arr = (Student**) malloc(n * sizeof (Student*));

    for (int i = 0; i < n; ++i) {
        arr[i] = (Student*) malloc(sizeof (Student));
    }

    for (int i = 0; i < n; ++i) {
        printf("\nEnter the details of student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &((arr[i])->roll_number));

        printf("Marks1: ");
        scanf("%lf", &((arr[i])->marks1));

        printf("Marks2: ");
        scanf("%lf", &((arr[i])->marks2));


        printf("Marks3: ");
        scanf("%lf", &((arr[i])->marks3));
    }

    for (int i = 0; i < n; ++i) {
        printf("\nDisplay the details of student %d:\n", i + 1);
        printf("roll number: %d\n", (arr[i])->roll_number);
        printf("marks1: %g\n", (arr[i])->marks1);
        printf("marks2: %g\n", (arr[i])->marks2);
        printf("marks3: %g\n", (arr[i])->marks3);
    }

    for (int i = 0; i < n; ++i) {
        free((void*) arr[i]);
    }

    free((void*) arr);

    return 0;
}

// solve above question using array to pointer notation:-

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
//     int n;
//     printf("Enter the no. of students: ");
//     scanf("%d", &n);

//     Student** arr = (Student**) malloc(n * sizeof (Student*));

//     for (int i = 0; i < n; ++i) {
//         arr[i] = (Student*) malloc(n * sizeof (Student));
//     }

//     for (int i = 0; i < n; ++i) {
//         printf("\nEnter the details of student %d:\n", i + 1);

//         printf("Roll Number: ");
//         scanf("%d", &((*(arr + i))->roll_number));

//         printf("Marks1: ");
//         scanf("%lf", &((*(arr + i))->marks1));

//         printf("Marks2: ");
//         scanf("%lf", &((*(arr + i))->marks2));


//         printf("Marks3: ");
//         scanf("%lf", &((*(arr + i))->marks3));
//     }

//     for (int i = 0; i < n; ++i) {
//         printf("\nDisplay the details of student %d:\n", i + 1);
//         printf("roll number: %d\n", (*(arr + i))->roll_number);
//         printf("marks1: %g\n", (*(arr + i))->marks1);
//         printf("marks2: %g\n", (*(arr + i))->marks2);
//         printf("marks3: %g\n", (*(arr + i))->marks3);
//     }

//     for (int i = 0; i < n; ++i) {
//         free((void*) *(arr + i));
//     }

//     free((void*) arr);

//     return 0;
// }


/*
    Enter the no. of students: 5

    Enter the details of student 1:
    Roll Number: 1
    Marks1: 1
    Marks2: 1
    Marks3: 1

    Enter the details of student 2:
    Roll Number: 2
    Marks1: 2
    Marks2: 2
    Marks3: 2

    Enter the details of student 3:
    Roll Number: 3
    Marks1: 3
    Marks2: 3
    Marks3: 3

    Enter the details of student 4:
    Roll Number: 4
    Marks1: 4
    Marks2: 4
    Marks3: 4

    Enter the details of student 5:
    Roll Number: 5
    Marks1: 5
    Marks2: 5
    Marks3: 5

    Display the details of student 1:
    roll number: 1
    marks1: 1
    marks2: 1
    marks3: 1

    Display the details of student 2:
    roll number: 2
    marks1: 2
    marks2: 2
    marks3: 2

    Display the details of student 3:
    roll number: 3
    marks1: 3
    marks2: 3
    marks3: 3

    Display the details of student 4:
    roll number: 4
    marks1: 4
    marks2: 4
    marks3: 4

    Display the details of student 5:
    roll number: 5
    marks1: 5
    marks2: 5
    marks3: 5
*/
