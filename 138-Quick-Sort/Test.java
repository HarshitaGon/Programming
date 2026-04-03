import java.util.Scanner;

class Test {
    static void quickSort(int[] arr, int start, int end) {
        if (start < end) {
            int pivotIndex = partition(arr, start, end);

            quickSort(arr, start, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, end);
        }
    }

    static int partition(int[] arr, int start, int end) {
        int pivot = arr[end];
        int idx = start - 1;

        for (int itr = start; itr < end; ++itr) {
            if (arr[itr] < pivot) {
                ++idx;
                swap(arr, idx, itr);
            }
        }

        ++idx;
        swap(arr, idx, end);
        return idx;
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
        quickSort(arr, 0, arr.length - 1);

        for (int i : arr) {
            System.out.print(i + " ");
        }

        System.out.println();
        sc.close();
    }
}
