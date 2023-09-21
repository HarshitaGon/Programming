import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows: ");
        r = sc.nextInt();

        for (int i = 1; i <= r; ++i) {
            int to_print = i;

            for (int j = 1; j <= i; ++j) {
                System.out.printf("%02d ", to_print);
                to_print = to_print + (r - j);
            }

            System.out.println();
        }
    }
}


/*
    Enter the number of rows: 5

    01
    02 06
    03 07 10
    04 08 11 13
    05 09 12 14 15
*/