import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        System.out.println(n + "! = " + find_factorial(n));
    }

    static int find_factorial(int n) {
        int factorial = 1;

        while (n > 0) {
            factorial = factorial * n;
            --n;
        }

        return factorial;
    }
}


/*

Enter a positive integer: 5
5! = 120

*/