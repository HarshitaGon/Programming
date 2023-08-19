import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter upper limit: ");
        n = sc.nextInt();

        int i = 1;

        while (i <= n) {
            System.out.print(i + " ");
            ++i;
        }

        System.out.println();
    }
}