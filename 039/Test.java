import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        int sum = 0;

        while (n > 9) {
            int last_digit = n % 10;
            n = n / 10;
            sum = sum + last_digit;
            System.out.print(last_digit + " + ");
        }

        System.out.println(n + " = " + (sum + n));
    }
}

/*

Enter a positive integer: 1024
4 + 2 + 0 + 1 = 7

*/