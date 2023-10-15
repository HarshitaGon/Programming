import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the no. of integers: ");
        n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter " + n + " integers: ");

        for (int i = 0; i < arr.length; ++i) {
            arr[i] = sc.nextInt();
        }

        int element_to_search;
        System.out.print("Enter element to be searched: ");
        element_to_search = sc.nextInt();

        int index = find_index(arr, element_to_search);

        if (index == -1)
            System.out.println(element_to_search + " not found");
        else
            System.out.println(element_to_search + " found at " + index);
    }

    static int find_index(int[] arr, int target) {
        int index = -1;

        for (int i = 0; i < arr.length; ++i) {
            if (target == arr[i]) {
                index = i;
                break;
            }
        }

        return index;
    }
}
