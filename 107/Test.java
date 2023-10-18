import java.util.Scanner;

class Student {
    int roll_number;
    double marks1;
    double marks2;
    double marks3;
}

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the no. of students: ");
        n = sc.nextInt();

        Student[] arr = new Student[n];

        for (int i = 0; i < n; ++i) {
            arr[i] = new Student();
        }

        for (int i = 0; i < n; ++i) {
            System.out.println("\nEnter the details of student " + (i + 1) + ":");

            System.out.print("Roll Number: ");
            arr[i].roll_number = sc.nextInt();

            System.out.print("Marks1: ");
            arr[i].marks1 = sc.nextDouble();

            System.out.print("Marks2: ");
            arr[i].marks2 = sc.nextDouble();

            System.out.print("Marks3: ");
            arr[i].marks3 = sc.nextDouble();
        }

        for (int i = 0; i < n; ++i) {
            System.out.println("\nDisplay the details of student " + i + 1 + ":");
            System.out.println("roll number: " + (arr[i]).roll_number);
            System.out.println("marks1: " + (arr[i]).marks1);
            System.out.println("marks2: " + (arr[i]).marks2);
            System.out.println("marks3: " + (arr[i]).marks3);
        }
    }
}



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