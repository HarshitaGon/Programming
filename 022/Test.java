import java.util.Scanner;
import java.lang.Math;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double a, b, c;
        System.out.print("Enter the values of a, b and c: ");
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();

        double d = (b * b) - (4 * a * c);

        if (d >= 0) {
            System.out.print("The roots are " + (-b + Math.sqrt(d)) / (2 * a));
            System.out.println(" and " + (-b - Math.sqrt(d)) / (2 * a));
        }

        else {
            System.out.println("The roots are imaginary");
        }
    }
}