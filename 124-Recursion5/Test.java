import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter size of array: ");
        n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter " + n + " integers: ");

        for (int i = 0; i < n; ++i)
        {
            arr[i] = sc.nextInt();
        }

        for (int i = 0; i < n; ++i)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.println();

        System.out.print("maximum integer of array : " + max_arr(arr, n, 0));

        System.out.println();

    }

    static int max_arr(int[] ref, int size, int i)
    {
        if (i == size - 1)
        {
            return ref[i];
        }

        else
        {
            int temp = max_arr(ref, size, i + 1);

            return ref[i] >= temp ? ref[i] : temp;
        }
    }
}