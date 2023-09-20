import java.util.Scanner;

class Test {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int n;
    System.out.print("Enter the number of rows: ");
    n = sc.nextInt();

    System.out.println();

    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= i - 1; ++j) {
        System.out.print("  ");
      }

      for (int j = 1; j <= ((n - i) * 2) + 1; ++j) {
        System.out.print("* ");
      }

      System.out.println();
    }
  }
}




/*

Enter the number of rows: 5

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

11 12 13 14 15 16 17 18 19
21 22 23 24 25 26 27 28 29
31 32 33 34 35 36 37 38 39
41 42 43 44 45 46 47 48 49
51 52 53 54 55 56 57 58 59


*/