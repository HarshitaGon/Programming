import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("* * * * * * * * * * * * * *");
        System.out.println("* Choice   Operation      *");
        System.out.println("*                         *");
        System.out.println("* 1        Addition       *");
        System.out.println("* 2        Subtraction    *");
        System.out.println("* 3        Multiplication *");
        System.out.println("* * * * * * * * * * * * * *");

        int a, b;
        System.out.print("Enter 2 integers: ");
        a = sc.nextInt();
        b = sc.nextInt();

        int c;
        System.out.print("Enter a choice: ");
        c = sc.nextInt();

        if (c == 1)
            System.out.println(a + " + " + b + " = " + sum(a,  b));
        else if (c == 2)
            System.out.println(a + " - " + b + " = " + difference(a, b));
        else if (c == 3)
            System.out.println(a + " * " + b + " = " + product(a, b));
    }

    static int sum(int a, int b) {
        return a + b;
    }

    static int difference(int a, int b) {
        return a - b;
    }

    static int product(int a, int b) {
        return a * b;
    }

}

/*

create a functions for these operations:

* * * * * * * * * * * * * *
* Choice   Operation      *
*                         *
* 1        Addition       *
* 2        Subtraction    *
* 3        Multiplication *
* * * * * * * * * * * * * *

Enter 2 integers: 10 5
Enter your choice: 2

10 - 5 = 5

*/