import java.util.Scanner;

class Test {
    static int[] mergeSort(int[] arr, int start, int end) {
        if (end - start == 1) {
            return new int[] { arr[start] };
        }

        int mid = (start + end) / 2;
        int[] left = mergeSort(arr, start, mid);
        int[] right = mergeSort(arr, mid, end);

        return merge(left, right);
    }

    static int[] merge(int[] left, int[] right) {
        int i = 0, j = 0, k = 0;

        int[] res = new int[left.length + right.length];

        while (i < left.length && j < right.length) {
            if (left[i] < right[j]) {
                res[k] = left[i];
                ++i;
            } else {
                res[k] = right[j];
                ++j;
            }

            ++k;
        }

        while (i < left.length) {
            res[k] = left[i];
            ++i;
            ++k;
        }

        while (j < right.length) {
            res[k] = right[j];
            ++j;
            ++k;
        }

        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of the array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; ++i) {
            arr[i] = sc.nextInt();
        }
        arr = mergeSort(arr, 0, arr.length);

        for (int i : arr) {
            System.out.print(i + " ");
        }

        System.out.println();
        sc.close();
    }
}