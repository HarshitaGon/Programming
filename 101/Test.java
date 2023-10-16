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

        Student ref = new Student();

        System.out.print("Enter the details of student:\n");

        System.out.print("Roll number: ");
        ref.roll_number = sc.nextInt();

        System.out.print("Marks1: ");
        ref.marks1 = sc.nextDouble();

        System.out.print("Marks2: ");
        ref.marks2 = sc.nextDouble();


        System.out.print("Marks3: ");
        ref.marks3 = sc.nextDouble();

        System.out.println("\nroll number: " + ref.roll_number);
        System.out.println("marks1: " + ref.marks1);
        System.out.println("marks2: " + ref.marks2);
        System.out.println("marks3: " + ref.marks3);
    }
}



/*
    The -> operator of C is equivalent to the . operator of Java.

    There is no equivalent of C's . operator in Java.
*/

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

