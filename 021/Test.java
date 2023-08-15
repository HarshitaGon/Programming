import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a, b, c;
        System.out.print("Enter the side lengths: ");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        if ((a + b) > c && (a + c) > b && (b + c) > a) {
            if ((a != b) && (a != c))
                System.out.println("It is a scalene triangle");
            else if ((a == b) || (b == c) || (a == c))
                System.out.println("It is an isosceles triangle");
            else
                System.out.println("It is an equilateral triangle");
        }

        else {
            System.out.println("It is an invalid triangle");
        }
    }
}