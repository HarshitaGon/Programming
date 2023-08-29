import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        int digits = 0, temp = n;

        while (n > 0) {
            n = n / 10;
            ++digits;
        }

        int divisor = 1;
        int i = 1;

        while (i < digits) {
            divisor = divisor * 10;
            i++;
        }

        int sum = 0;

        while (temp > 9) {
            int first_digit = temp / divisor;
            System.out.print(first_digit + " + ");
            sum = sum + first_digit;
            temp = temp % divisor;
            divisor = divisor / 10;
        }

        System.out.println(temp + " = " + (sum + temp));
    }
}

/*

Enter a positive integer: 1024
1 + 0 + 2 + 4 = 7

Note: Don't reverse the integer.

*/
