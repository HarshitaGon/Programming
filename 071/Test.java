import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        System.out.println(n + " has " + number_of_digits(n) + " digits");
    }

    static int number_of_digits(int n) {
        int digits = 0;

        while (n > 0) {
            n = n / 10;
            ++digits;
        }
    
        return digits;
    }
}