import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows (odd): ");
        r = sc.nextInt();

        int temp = (r + 1) / 2;
        int to_print;

        for (int i = 1; i <= temp - 1; ++i) {
            to_print = temp;

            for (int j = 1; j <= i; ++j) {
                --to_print;
                System.out.print(to_print + " ");
            }

            for (int j = 1; j <= r - (2 * i); ++j) {
                System.out.print(to_print + " ");
            }

            for (int j = 1; j <= i; ++j) {
                System.out.print(to_print + " ");
                ++to_print;
            }

            System.out.println();
        }

        /////////////////////////////////////////////////////////

        to_print = temp;

        for (int i = 1; i <= temp; ++i) {
            --to_print;
            System.out.print(to_print + " ");
        }

        for (int i = 1; i < temp; ++i) {
            ++to_print;
            System.out.print(to_print + " ");
        }

        System.out.println();

        /////////////////////////////////////////////////////////

        for (int i = temp - 1; i >= 1; --i) {
            to_print = temp;

            for (int j = 1; j <= i; ++j) {
                --to_print;
                System.out.print(to_print + " ");
            }

            for (int j = 1; j <= r - (2 * i); ++j) {
                System.out.print(to_print + " ");
            }

            for (int j = 1; j <= i; ++j) {
                System.out.print(to_print + " ");
                ++to_print;
            }

            System.out.println();
        }
    }
}


/*
    Enter the number of rows (odd): 7

    3 3 3 3 3 3 3
    3 2 2 2 2 2 3
    3 2 1 1 1 2 3
    3 2 1 0 1 2 3
    3 2 1 1 1 2 3
    3 2 2 2 2 2 3
    3 3 3 3 3 3 3
*/