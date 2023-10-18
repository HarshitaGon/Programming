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

        System.out.print("\n");

        double max_sum = 0;
        int topper = 0;

        for (int i = 0; i < n; ++i) {
            double sum = arr[i].marks1 + arr[i].marks2 + arr[i].marks3;

            if (sum > max_sum ) {
                max_sum = sum;
                topper = i;
            }
        }

        System.out.println("Student " + (topper + 1) + " got highest marks.");
    }
}