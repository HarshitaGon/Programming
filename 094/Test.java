import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the no. of integers: ");
        n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter " + n + " integers: ");

        for (int i = 0; i < n; ++i) {
            arr[i] = sc.nextInt();
        }

        int sum = 0;

        for (int i = 0; i < n; ++i) {
            sum = sum + arr[i];
        }

        System.out.println("Their sum is " + sum);
    }
}