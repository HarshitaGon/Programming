import java.util.Scanner;

class Test {
    static void bubbleSort(int[] arr, int n) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j] > arr[j + 1])
                    swap(arr, j, j + 1);
            }
        }
    }

    static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of the array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; ++i) {
            arr[i] = sc.nextInt();
        }

        bubbleSort(arr, n);

        for (int i : arr) {
            System.out.print(i + " ");
        }

        System.out.println();
        sc.close();
    }
}
