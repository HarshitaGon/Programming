import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double base;
        System.out.print("Enter the base: ");
        base = sc.nextDouble();

        int exponent;
        System.out.print("Enter the integral exponent: ");
        exponent = sc.nextInt();

        if ((base == 0.0) && (exponent == 0)) {
            System.out.println("\n0 ^ 0 3is undefined");
        }

        else if ((base == 0.0) && (exponent < 0)) {
            System.out.println("\nDividing by 0 is undefined");
        }

        else {
            double result = 1.0;
            System.out.print("\n" + base + " ^ " + exponent + " = ");

            if (exponent >= 0) {
                while (exponent > 0) {
                    result = result * base;
                    --exponent;
                }

                System.out.println(result);
            }

            else if (exponent < 0) {
                while (exponent < 0) {
                    result = result * base;
                    ++exponent;
                }

                System.out.println(1 / result);
            }
        }
    }
}



/*

Note: Try using %g with printf() to print double values.

1)
Enter the base: 1.2
Enter the integral exponent: 3

1.2 ^ 3 = 1.728

2)
Enter the base: -2.5
Enter the integral exponent: -2

-2.5 ^ -2 = 0.16

3)
Enter the base: 7
Enter the integral exponent: 0

7 ^ 0 = 1

4)
Enter the base: 0
Enter the integral exponent: 4

0 ^ 4 = 0

5)
Enter the base: 0
Enter the integral exponent: 0

0 ^ 0 is undefined

6)
Enter the base: 0
Enter the integral exponent: -3

Dividing by 0 is undefined

*/