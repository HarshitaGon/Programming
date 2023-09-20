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
        for (int j = 1; j <= columns + rows - 1; ++j) {
          if ((i + j == rows + 1) || (i == 1 && j >= rows) ||(i + j
                == columns + rows) || (i == rows && j <= columns))
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

11 12 13 14 15 16 17 18
21 22 23 24 25 26 27 28
31 32 33 34 35 36 37 38
41 42 43 44 45 46 47 48


*/



