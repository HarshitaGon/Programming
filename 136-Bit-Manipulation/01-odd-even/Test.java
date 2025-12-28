import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a no.: ");
        int n = sc.nextInt();

        if ((n & 1) == 1)
            System.out.println("n is odd");
        else
            System.out.println("n is even");
    }
}