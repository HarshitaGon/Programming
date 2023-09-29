import java.util.Scanner;
import java.lang.Math;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int ll, ul;
        System.out.print("Enter lower and upper limts: ");
        ll = sc.nextInt();
        ul = sc.nextInt();

        while (ll <= ul) {
            boolean ll_is_prime = is_prime(ll);
            boolean ll_is_armstrong = is_armstrong(ll);

            if (ll_is_armstrong && ll_is_prime)
                System.out.println(ll + " is prime as well as armstrong");
            else if (ll_is_armstrong)
                System.out.println(ll +" is only armstrong");
            else if (ll_is_prime)
                System.out.println(ll +" is only prime");
            else
                System.out.println(ll + " is neither prime nor armstrong");

            ++ll;
        }
    }

    static boolean is_armstrong(int i) {
        int digits = 0, temp1 = i, temp2 = i;

        while (i > 0) {
            i = i / 10;
            ++digits;
        }

        int sum = 0;

        while (temp1 > 0) {
            int last_digit = temp1 % 10;
            sum = sum + (int) Math.pow((double) last_digit, (double) digits);
            temp1 = temp1 / 10;
        }

        return sum == temp2;
    }

    static boolean is_prime(int i) {
        if (i == 1) {
            return false;
        }

        else {
            int j = 2;
            boolean i_is_prime = true;

            while (j * j <= i) {
                if (i % j == 0) {
                    i_is_prime = false;
                    break;
                }

                ++j;
            }

            return i_is_prime;
        }
    }
}



/*

Enter lower and upper limits (> 1): 7 13

7 is prime as well as armstrong
8 is only armstrong
9 is only armstrong
10 is neither prime nor armstrong
11 is only prime
12 is neither prime nor armstrong
13 is only prime

*/