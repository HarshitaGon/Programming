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

        Node ref_first_node = new Node();
        ref_first_node.value = 10;

    	Node ref_second_node = new Node();
        ref_second_node.value = 20;

    	Node ref_third_node = new Node();
        ref_third_node.value = 30;

    	Node ref_fourth_node = new Node();
        ref_fourth_node.value = 40;

    	Node ref_fifth_node = new Node();
        ref_fifth_node.value = 50;

        ref_first_node.ref_next_node = ref_second_node;
        ref_second_node.ref_next_node = ref_third_node;
        ref_third_node.ref_next_node = ref_fourth_node;
        ref_fourth_node.ref_next_node = ref_fifth_node;
        ref_fifth_node.ref_next_node = ref_first_node;

        Node ref_current_node = ref_first_node;

    	while (true)
	    {
		    System.out.print(ref_current_node.value + " ");
		    ref_current_node = ref_current_node.ref_next_node;

            if (ref_current_node == ref_first_node)
            {
                break;
            }
        }

        System.out.println();
    }
}