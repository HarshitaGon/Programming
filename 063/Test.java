import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int r;
        System.out.print("Enter the number of rows: ");
        r = sc.nextInt();

        for (int i = 1; i <= r; ++i) {
            int to_print = i;

            for (int j = 1; j <= r; ++j) {
                System.out.printf("%02d ", to_print);
                to_print = to_print + r;
            }

            System.out.println();
        }
    }
}


/*
    Enter the number of rows: 5

    01 06 11 16 21
    02 07 12 17 22
    03 08 13 18 23
    04 09 14 19 24
    05 10 15 20 25
*/