import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int rows;
        System.out.print("Enter the number of rows (>= 3): ");
        rows = sc.nextInt();

        int columns;
        System.out.print("Enter the number of columns (>= 3): ");
        columns = sc.nextInt();

        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= columns; ++j) {
                if ((i == 1) || (i == rows) || (j == 1) || (j == columns))
                    System.out.print("* ");
                else
                    System.out.print("  ");
            }

            System.out.println();
        }
    }
}


/*

Enter the number of rows (>= 3): 4
Enter the number of columns (>= 3): 5

* * * * *
*       *
*       *
* * * * *

*/