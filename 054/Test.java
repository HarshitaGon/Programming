import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int rows;
        System.out.print("Enter the number of rows: ");
        rows = sc.nextInt();

        // for (int i = 1; i <= rows; ++i) {
        //     for (int j = 1; j <= rows - i; ++j) {
        //         System.out.print("  ");
        //     }

        //     for (int j = 1; j <= i; ++j) {
        //         System.out.print("* ");
        //     }

        //     System.out.println();
        // }

        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= rows; ++j) {
                if (i + j > rows)
                    System.out.print("* ");
                else
                    System.out.print("  ");

            }

            System.out.println();
        }
    }
}


/*
    Enter the number of rows: 5

            *
          * *
        * * *
      * * * *
    * * * * *
*/

/*

11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55

*/