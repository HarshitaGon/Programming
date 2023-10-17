/* compare the marks of n students in Heap memory*/

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

    Student* arr = (Student*) malloc(n * sizeof (Student));

    for (int i = 0; i < n; ++i) {
        printf("\nEnter the details of student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &((arr[i]).roll_number));

        printf("Marks1: ");
        scanf("%lf", &((arr[i]).marks1));

        printf("Marks2: ");
        scanf("%lf", &((arr[i]).marks2));


        printf("Marks3: ");
        scanf("%lf", &((arr[i]).marks3));
    }

    printf("\n");

    double max_sum = 0;
    int topper = 0;

    for (int i = 0; i < n; ++i) {
        double sum = arr[i].marks1 + arr[i].marks2 + arr[i].marks3;

        if (sum > max_sum ) {
            max_sum = sum;
            topper = i;
        }
    }

    printf("Student %d got highest marks.\n", topper);

    free((void*) arr);

    return 0;
}



// using pointer notation :-

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

//     Student* arr = (Student*) malloc(n * sizeof (Student));

//     for (int i = 0; i < n; ++i) {
//         printf("\nEnter the details of student %d:\n", i + 1);

//         printf("Roll Number: ");
//         scanf("%d", &((*(arr + i)).roll_number));

//         printf("Marks1: ");
//         scanf("%lf", &((*(arr + i)).marks1));

//         printf("Marks2: ");
//         scanf("%lf", &((*(arr + i)).marks2));


//         printf("Marks3: ");
//         scanf("%lf", &((*(arr + i)).marks3));
//     }

//     double max_sum = 0;
//     int topper = 0;

//     for (int i = 0; i < n; ++i) {
//         double sum = ((*(arr + i)).marks1) + ((*(arr + i)).marks2) +
//                      ((*(arr + i)).marks3);

//         if (sum > max_sum ) {
//             max_sum = sum;
//             topper = i;
//         }
//     }

//     printf("Student %d got highest marks.\n", topper);

//     free((void*) arr);

//     return 0;
// }


/*
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

    Student 4 got highest marks.
*/
