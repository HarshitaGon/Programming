import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer (>= 2): ");
        n = sc.nextInt();

        System.out.print("Prime factors - ");

        int i = 1;

        while (i <= n) {
            if ((n % i == 0) && (is_prime(i))) //In this line we're doing short circuit evalution
                System.out.print(i + " ");

            ++i;
        }

        System.out.println();
    }

    static boolean is_prime(int i) {
        if (i == 1) {
            return false;
        }

        else {
            boolean n_is_prime = true;
            int j = 2;

            while (j * j <= i) {
                if (i % j == 0) {
                    n_is_prime = false;
                    break;
                }

                ++j;
            }
            return n_is_prime;
        }
    }

}


/*
  1)
  Enter a positive integer (>= 2): 15
  Prime factors - 3 5


  2)
  Enter a positive integer: 48
  Prime factors - 2 3
*/

