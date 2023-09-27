import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a postive integer: ");
        n = sc.nextInt();

        if (n == 1) {
            System.out.println("1 is neither prime nor composite\n");
        }

        else if (is_prime(n)) {
            System.out.println(n +" is prime");
        }

        else {
            System.out.println(n + " is composite");
        }
    }

    static boolean is_prime(int n) {
        boolean n_is_prime = true;
        int i = 2;

        while (i * i <= n) {
            if (n % i == 0) {
                n_is_prime = false;
                break;
            }

            ++i;
        }

        return n_is_prime;
    }
}