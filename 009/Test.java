import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        if (n % 5 == 0) {
            if (n % 11 == 0)
                System.out.println(n + " is divisible by both 5 and 11");
            else
                System.out.println(n + " is divisible by 5");
        }

        else {
            if (n % 11 == 0)
                System.out.println(n + " is divisible by 11");
            else 
                System.out.println(n + " is neither divisible by 5 nor by 11");
        }

    }
}