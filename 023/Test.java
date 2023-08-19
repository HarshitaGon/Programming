import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double x;
        System.out.print("Enter the  number of units: ");
        x = sc.nextDouble();

        if (x > 250.0) {
            System.out.println("Rs. " + (((50.0 * 0.5) + (100.0 * 0.75) +
                                        (100.0 * 1.20) + ((x - 250.0) * 1.50)) *
                                        1.2));
        }

        else if (x > 150.0) {
            System.out.println("Rs. " + ((50.0 * 0.5) + (100.0 * 0.75) +
                                 ((x - 150.0) * 1.20)));
        }

        else if (x > 50.0) {
            System.out.println("Rs. " + ((50.0 * 0.5) + ((x - 50.0) * 0.75)));
        }

        else {
            System.out.println("Rs. " + ((x * 0.5)));
        }
    }
}