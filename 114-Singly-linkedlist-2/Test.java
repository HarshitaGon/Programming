import java.util.Scanner;

class Node
{
	int value;
    Node ref_next_node;
}

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter the number of integers (>= 1): ");
        n = sc.nextInt();

        System.out.print("Enter " + n + " integers: ");

        Node ref_head_node = new Node();
        ref_head_node.value = sc.nextInt();

        ref_head_node.ref_next_node = null;

        Node ref_previous_node = ref_head_node;

        for (int i = 1; i < n; ++i)
        {
            Node ref_current_node = new Node();
            ref_current_node.value = sc.nextInt();

            ref_previous_node.ref_next_node = ref_current_node;
            ref_current_node.ref_next_node = null;

            ref_previous_node = ref_current_node;
        }

        Node ref_current_node = ref_head_node;

        while (ref_current_node != null)
        {
            System.out.print(ref_current_node.value + " ");
            ref_current_node = ref_current_node.ref_next_node;
        }

        System.out.println();
    }
}