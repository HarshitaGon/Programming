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

        for (int i = 0; i < n; ++i) {
            if (arr[i] > 0)
                System.out.print(arr[i] + " ");
        }

        System.out.println();


    }
}



/*

1)
Enter the no. of integers: 10
Enter 10 integers: 1 0 -2 3 4 -5 -7 8 9 5
1 3 4 8 9 5

2)
Enter the no. of integers: 10
Enter 10 integers: -1 0 0 -1 -2 -3 0 -4 -5 0


*/