import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the number of rows (odd): ");
        n = sc.nextInt();

        n = (n + 1) / 2;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= (i - 1) * 2; ++j) {
                System.out.print("  ");
            }

            for (int j = 1; j <= n - i + 1; ++j) {
                System.out.print("* ");
            }

            System.out.println();
        }

        for (int i = n - 1; i >= 1; --i) {
            for (int j = 1; j <= (i - 1) * 2; ++j) {
                System.out.print("  ");
            }

            for (int j = 1; j <= n - i + 1; ++j) {
                System.out.print("* ");
            }

            System.out.println();
        }
    }
}



/*
    Enter the number of rows (odd): 9

    * * * * *
        * * * *
            * * *
                * *
                    *
                * *
            * * *
        * * * *
    * * * * *
*/