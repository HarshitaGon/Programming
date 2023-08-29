import java.util.Scanner;
import java.lang.Math;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        int last_digit = n % 10;
        n = n / 10;

        int digits = (int) Math.log10((double) n) + 1;
        int divisor = (int) Math.pow(10.0, (double) (digits - 1));
        int first_digit = n / divisor;
        n = n % divisor;

        n = (last_digit * divisor) + n;
        n = (n * 10) + first_digit;

        System.out.println("After swaping first and last digits, " + n);
    }
}



/*

1)
Enter a positive integer: 1234
After swapping first and last digits, 4231

2)
Enter a positive integer: 1230
After swapping first and last digits, 231

*/