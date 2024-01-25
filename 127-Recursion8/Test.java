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

        for (int i = 0; i < n; ++i) {
            arr[i] = sc.nextInt();
        }

        int element_to_search;
        System.out.print("Enter element to be searched: ");
        element_to_search = sc.nextInt();

        int index = linear_search(arr, n, element_to_search, 0);

        if (index == -1)
            System.out.println(element_to_search + " not found");
        else
            System.out.println(element_to_search + " found at index " + index);
    }

    static int linear_search(int[] arr, int n, int target, int starting_index)
    {
        if (starting_index == n)
        {
            return -1;
        }

        else if (arr[starting_index] == target)
        {
            return starting_index;
        }

        else
        {
            return linear_search(arr, n, target, starting_index + 1);
        }
    }
}