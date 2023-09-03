import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        if (n == 1) {
            System.out.println("1 is niether prime nor composite");
        }

        else {
            int i = 2, no_of_factors = 2;

            while (i < n) {
                if (n % i == 0) {
                    ++no_of_factors;
                    break;
                }

                ++i;
            }

            if (no_of_factors == 2)
                System.out.println(n + " is prime");
            else
                System.out.println(n + " is composite");
        }
    }
}




/*

1)
Enter a positive integer: 1
1 is neither prime nor composite

2)
Enter a positive integer: 10
10 is composite

3)
Enter a positive integer: 13
13 is prime

*/