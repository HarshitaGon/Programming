import java.util.Scanner;

class Test {
    public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);

          System.out.print("Enter 2 integers: ");
          int a = sc.nextInt();
          int b = sc.nextInt();

          System.out.println(a + " + " + b + " = " + (a + b));
          System.out.println(a + " - " + b + " = " + (a - b));
          System.out.println(a + " * " + b + " = " + (a * b));
    }
}

/*

Enter 2 integers: 5 10
5 + 10 = 15
5 - 10 = -5
5 * 10 = 50

*/