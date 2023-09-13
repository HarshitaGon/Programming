import java.util.Scanner;
import java.lang.Math;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        if (n == 1) {
            System.out.println("1 is an armstrong number");
        }

        else {
            int temp1 = n, no_digits = 0;

            while (temp1 > 0) {
                ++no_digits;
                temp1 = temp1 / 10;
            }

            int sum = 0, temp2 = n;

            while (temp2 > 0) {
                int last_d = temp2 % 10;
                sum = sum + (int) Math.pow((double) last_d, (double) no_digits);
                temp2 = temp2 / 10;
            }

            if (sum == n)
                System.out.println(n + " is an armstrong number");
            else
                System.out.println(n + " is not an armstrong number");
        }
    }
}



/*

1)
Enter a positive integer: 1
1 is an armstrong number

2)
Enter a positive integer: 10
10 is not an armstrong number

3)
Enter a positive integer: 153
153 is an armstrong number

*/