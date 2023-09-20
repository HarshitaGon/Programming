import java.util.Scanner;

class Test {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int n;
    System.out.printf("Enter the number of rows (odd) (>=3): ");
    n = sc.nextInt();

    int r = (n + 1) / 2;

    for (int i = 1; i <= r - 1; ++i) {
      System.out.print("  ");
    }

    System.out.println("* ");

    //////////////////////////////////////////////////////////////

    for (int i = 2; i <= r; ++i) {
      for (int j = 1; j <= r - i; ++j) {
        System.out.print("  ");
      }

      System.out.print("* ");

      for (int j = 1; j <= ((i - 2) * 2) + 1; ++j) {
        System.out.print("  ");
      }

      System.out.println("* ");
    }

    for (int i = r - 1; i >= 2; --i) {
      for (int j = 1; j <= r - i; ++j) {
        System.out.print("  ");
      }

      System.out.print("* ");

      for (int j = 1; j <= ((i - 2) * 2) + 1; ++j) {
        System.out.print("  ");
      }

      System.out.println("* ");
    }

    //////////////////////////////////////////////////////////////

    for (int i = 1; i <= r - 1; ++i) {
      System.out.print("  ");
    }

    System.out.println("* ");
  }
}


/*
    Enter the number of rows (odd) (>= 3): 7

          *
        *   *
      *       *
    *           *
      *       *
        *   *
          *

    11 12 13 14 15 16 17
    21 22 23 24 25 26 27
    31 32 33 34 35 36 37
    41 42 43 44 45 46 47
    51 52 53 54 55 56 57
    61 62 63 64 65 66 67
    71 72 73 74 75 76 77

*/