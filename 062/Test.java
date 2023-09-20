import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows (odd) (>= 5): ");
        r = sc.nextInt();

        for (int i = 1; i <= r; ++i) {
            System.out.print("* ");
        }

        System.out.println();

        /////////////////////////////////////////////////////////

        int n = (r + 1) / 2;
        
        for (int i = 2; i <= n - 1; ++i) {
            System.out.print("* ");

            for (int j = 1; j <= i - 2; ++j) {
                System.out.print("  ");
            }

            System.out.print("* ");

            for (int j = 1; j <= ((n - i) * 2) - 1; ++j) {
                System.out.print("  ");
            }

            System.out.print("* ");

            for (int j = 1; j <= i - 2; ++j) {
                System.out.print("  ");
            }

            System.out.println("* ");
        }

        //////////////////////////////////////////////////////////

        System.out.print("* ");

        for (int i = 1; i < n - 1; ++i) {
            System.out.print("  ");
        }

        System.out.print("* ");

        for (int i = 1; i < n - 1; ++i) {
            System.out.print("  ");
        }

        System.out.println("* ");

        /////////////////////////////////////////////////////////

        for (int i = n - 1; i >= 2; --i) {
            System.out.print("* ");

            for (int j = 1; j <= i - 2; ++j) {
                System.out.print("  ");
            }

            System.out.print("* ");

            for (int j = 1; j <= ((n - i) * 2) - 1; ++j) {
                System.out.print("  ");
            }

            System.out.print("* ");

            for (int j = 1; j <= i - 2; ++j) {
                System.out.print("  ");
            }

            System.out.println("* ");
        }

        /////////////////////////////////////////////////////////

        for (int i = 1; i <= r; ++i) {
            System.out.print("* ");
        }

        System.out.println();
    }
}


/*
    Enter the number of rows (odd) (>= 5): 9

    * * * * * * * * *
    * *           * *
    *   *       *   *
    *     *   *     *
    *       *       *
    *     *   *     *
    *   *       *   *
    * *           * *
    * * * * * * * * *

    11 12 13 14 15 16 17
    21 22 23 24 25 26 27
    31 32 33 34 35 36 37
    41 42 43 44 45 46 47
    51 52 53 54 55 56 57
    61 62 63 64 65 66 67
    71 72 73 74 75 76 77

*/