import java.util.Scanner;

class Test {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int n;
    System.out.print("Enter the number of rows (>= 4): ");
    n = sc.nextInt();

    for (int i = 1; i <= n; ++i) {
      System.out.print("* ");
    }

    System.out.println();

    //////////////////////////////////////////////////////////

    for (int i = 2; i <= n - 1; ++i) {
      for (int j = 1; j <= i - 1; ++j) {
        System.out.print("  ");
      }

      System.out.print("* ");

      for (int j = 1; j <= n - 1 - i; ++j) {
        System.out.print("  ");
      }

      System.out.println("* ");
    }

    ////////////////////////////////////////////////////////////

    for (int i = 1; i <= n - 1; ++i) {
      System.out.print("  ");
    }

    System.out.println("* ");
  }
}


/*

Enter the number of rows (>= 4): 5

* * * * *
  *     *
    *   *
      * *
        *

* * * * * * * * * *
  *               *
    *             *
      *           *
        *         *
          *       *
            *     *
              *   *
                * *
                  *

print n stars

//////////////////////////////////////////

for i = 2 to (n - 1):
    print ? spaces
    print 1 star
    print ? spaces
    print 1 star

//////////////////////////////////////////

print (n - 1) spaces and 1 star

11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55

*/

