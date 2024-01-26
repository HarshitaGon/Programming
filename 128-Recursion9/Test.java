import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the no. of integers: ");
        n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter " + n + " integers: ");

        for (int i = 0; i < arr.length; ++i) {
            arr[i] = sc.nextInt();
        }

        reverse(arr, 0, n - 1);

        System.out.print("After reversing an array: ");

        for (int i = 0; i < arr.length; ++i) {
            System.out.print(arr[i] + " ");
        }

        System.out.println();
    }

    static void reverse(int[] arr, int i, int j)
    {
        if (i < j)
        {
            swap(arr, i, j);
            reverse(arr, i + 1, j - 1);
        }
    }

    static void swap(int[] arr, int index1, int index2) {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}