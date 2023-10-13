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

        int max_no = arr[0];
        int min_no = arr[0];

        for (int i = 1; i < n; ++i) {
            if (arr[i] > max_no)
                max_no = arr[i];

            else if (arr[i] < min_no)
                min_no = arr[i];
        }

        System.out.println("The maximum no. is " + max_no);
        System.out.println("The minimum no. is " + min_no);
    }
}