import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows (odd) (>= 5): ");
        r = sc.nextInt();

        r = (r + 1) / 2;

        for (int i = 1; i <= r - 1; ++i) {
            System.out.print("  ");
        }

        System.out.println("* ");

        ////////////////////////////////////////////////////////////////////////

        for (int i = 2; i <= r; ++i) {
            for (int j = 1; j <= r - i; ++j) {
                System.out.print("  ");
            }

            System.out.print("* ");

            for (int j = 1; j <= i - 2; ++j) {
                System.out.print("  ");
            }

            System.out.println("* ");
        }

        ////////////////////////////////////////////////////////////////////////

        for (int i = r - 1; i >= 2; --i) {
            for (int j = 1; j <= r - i; ++j) {
                System.out.print("  ");
            }

            System.out.print("* ");

            for (int j = 1; j <= i - 2; ++j) {
                System.out.print("  ");
            }

            System.out.println("* ");
        }

        ////////////////////////////////////////////////////////////////////////

        for (int i = 1; i <= r - 1; ++i) {
            System.out.print("  ");
        }

        System.out.println("* ");
    }
}


/*
    Enter the number of rows (odd) (>= 5): 9

            *
          * *
        *   *
      *     *
    *       *
      *     *
        *   *
          * *
            *

    11 12 13 14 15
    21 22 23 24 25
    31 32 33 34 35
    41 42 43 44 45
    51 52 53 54 55
    61 62 63 64 65
    71 72 73 74 75
    81 82 83 84 85
    91 92 93 94 95
*/