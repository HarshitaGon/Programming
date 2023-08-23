import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        int sum = 0;

        while (n > 9) {
            int rem = n % 10;
            n = n / 10;
            sum = sum + rem;
            System.out.print(rem + " + ");
        }

        System.out.println(n + " = " + (sum + n));
    }
}

/*

Enter a positive integer: 1024
4 + 2 + 0 + 1 = 7

*/