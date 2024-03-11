class Node
{
	int value;
    Node ref_previous_node;
	Node ref_next_node;
}

class Linked_List_int
{
    private Node ref_head_node;
    private Node ref_tail_node;
    private int size;

    Linked_List_int()
    {
        ref_head_node = null;
        ref_tail_node = null;
        size = 0;
    }

    boolean is_empty()
    {
        return size == 0;
    }

    void add(int n)
    {
        add(size, n);
    }

    int get(int i)
    {
        if ((i < 0) || (i >= size))
        {
            throw new IndexOutOfBoundsException();
        }

        Node ref_current_node = null;

        if (i < size / 2)
        {
            ref_current_node = ref_head_node;

            for (int j = 0; j < i; ++j)
            {
                ref_current_node = ref_current_node.ref_next_node;
            }
        }

        else
        {
            ref_current_node = ref_tail_node;

            for (int j = 0; j < size - i - 1; ++j)
            {
                ref_current_node = ref_current_node.ref_previous_node;
            }
        }

        return ref_current_node.value;
    }

    int size()
    {
        return size;
    }

    void print_forwards()
    {
        Node ref_current_node = ref_head_node;

        while (ref_current_node != null)
        {
            System.out.print(ref_current_node.value + " ");
            ref_current_node = ref_current_node.ref_next_node;
        }

        System.out.println();
    }

    void print_backwards()
    {
        Node ref_current_node = ref_tail_node;

        while (ref_current_node != null)
        {
            System.out.print(ref_current_node.value + " ");
            ref_current_node = ref_current_node.ref_previous_node;
        }

        System.out.println();
    }

    void set(int i, int n)
    {
        if ((i < 0) || (i >= size))
        {
            throw new IndexOutOfBoundsException();
        }

        Node ref_current_node = null;

        if (i < size / 2)
        {
            ref_current_node = ref_head_node;

            for (int j = 0; j < i; ++j)
            {
                ref_current_node = ref_current_node.ref_next_node;
            }
        }

        else
        {
            ref_current_node = ref_tail_node;

            for (int j = 0; j < size - i - 1; ++j)
            {
                ref_current_node = ref_current_node.ref_previous_node;
            }
        }

        ref_current_node.value = n;
    }

    void add(int i, int n)
    {
        if ((i < 0) || (i > size))
        {
            throw new IndexOutOfBoundsException();
        }

        Node ref_new_node = new Node();
        ref_new_node.value = n;

        if (size == 0)
        {
            ref_new_node.ref_next_node = null;
            ref_new_node.ref_previous_node = null;
            ref_head_node = ref_new_node;
            ref_tail_node = ref_new_node;
        }

        else
        {
            if (i == 0)
            {
                ref_new_node.ref_next_node = ref_head_node;
                ref_new_node.ref_previous_node = null;
                ref_head_node.ref_previous_node = ref_new_node;
                ref_head_node = ref_new_node;
            }

            else if (i == size)
            {
                ref_new_node.ref_next_node = null;
                ref_new_node.ref_previous_node = ref_tail_node;
                ref_tail_node.ref_next_node = ref_new_node;
                ref_tail_node = ref_new_node;
            }

            else
            {
                Node ref_current_node = null;

                if (i <= size / 2)
                {
                    ref_current_node = ref_head_node;

                    for (int j = 0; j < i - 1; ++j)
                    {
                        ref_current_node = ref_current_node.ref_next_node;
                    }
                }

                else
                {
                    ref_current_node = ref_tail_node;

                    for (int j = 0; j < size - i; ++j)
                    {
                        ref_current_node = ref_current_node.ref_previous_node;
                    }
                }

                ref_new_node.ref_next_node = ref_current_node.ref_next_node;
                ref_new_node.ref_previous_node = ref_current_node;
                ref_current_node.ref_next_node.ref_previous_node = ref_new_node;
                ref_current_node.ref_next_node = ref_new_node;
            }
        }

        ++size;
    }

    void clear()
    {
        ref_head_node = null;
        ref_tail_node = null;
        size = 0;
    }

    boolean contains(int n)
    {
        Node ref_current_node = ref_head_node;

        while (ref_current_node != null)
        {
            if (ref_current_node.value == n)
            {
                return true;
            }

            ref_current_node = ref_current_node.ref_next_node;
        }

        return false;
    }

    int index_of(int n)
    {
        Node ref_current_node = ref_head_node;

        for (int i = 0; i < size; ++i)
        {
            if (ref_current_node.value == n)
            {
                return i;
            }

            ref_current_node = ref_current_node.ref_next_node;
        }

        return -1;
    }

    int last_index_of(int n)
    {
        Node ref_current_node = ref_tail_node;

        for (int i = size - 1; i >= 0; --i)
        {
            if (ref_current_node.value == n)
            {
                return i;
            }

            ref_current_node = ref_current_node.ref_previous_node;
        }

        return -1;
    }

    void remove(int i)
    {
        if ((i < 0) || (i >= size))
        {
            throw new IndexOutOfBoundsException();
        }

        if (size == 1)
        {
            ref_head_node = null;
            ref_tail_node = null;
        }

        else
        {
            if (i == 0)
            {
                ref_head_node = ref_head_node.ref_next_node;
                ref_head_node.ref_previous_node = null;
            }

            else if (i == size - 1)
            {
                ref_tail_node = ref_tail_node.ref_previous_node;
                ref_tail_node.ref_next_node = null;
            }

            else
            {
                Node ref_current_node = null;

                if (i < size / 2)
                {
                    ref_current_node = ref_head_node;

                    for (int j = 0; j < i - 1; ++j)
                    {
                        ref_current_node = ref_current_node.ref_next_node;
                    }
                }

                else
                {
                    ref_current_node = ref_tail_node;

                    for (int j = 0; j < size - i; ++j)
                    {
                        ref_current_node = ref_current_node.ref_previous_node;
                    }
                }

                ref_current_node.ref_next_node =
                    ref_current_node.ref_next_node.ref_next_node;

                ref_current_node.ref_next_node.ref_previous_node =
                    ref_current_node;
            }
        }

        --size;
    }

    int[] to_array()
    {
        int[] array = new int[size];

        Node ref_current_node = ref_head_node;

        for (int i = 0; i < size; ++i)
        {
            array[i] = ref_current_node.value;
            ref_current_node = ref_current_node.ref_next_node;
        }

        return array;
    }
}

class Test
{
    public static void main(String[] args)
    {
	    Linked_List_int a1 = new Linked_List_int();

    	System.out.println("-------------------------------------------------");

    	System.out.println(a1.is_empty());

    	System.out.println("-------------------------------------------------");

        a1.add(10);
        a1.add(20);
        a1.add(30);

        System.out.println(a1.get(1));

    	System.out.println("-------------------------------------------------");

    	System.out.println(a1.is_empty());

    	System.out.println(a1.size());

    	System.out.println("-------------------------------------------------");

        a1.print_forwards();
        a1.print_backwards();

    	System.out.println("-------------------------------------------------");

        a1.set(2, 40);

        a1.print_forwards();
        a1.print_backwards();

    	System.out.println("-------------------------------------------------");

        a1.add(1, 50);

        a1.print_forwards();
        a1.print_backwards();

    	System.out.println("-------------------------------------------------");

        a1.clear();

    	System.out.println(a1.size());

    	System.out.println("-------------------------------------------------");

        a1.add(10);
        a1.add(20);
        a1.add(30);
        a1.add(40);
        a1.add(10);
        a1.add(20);

        a1.print_forwards();
        a1.print_backwards();

        System.out.println(a1.contains(30));
        System.out.println(a1.contains(50));

    	System.out.println("-------------------------------------------------");

        a1.print_forwards();
        a1.print_backwards();

        System.out.println(a1.index_of(10));
        System.out.println(a1.index_of(30));
        System.out.println(a1.index_of(50));

    	System.out.println("-------------------------------------------------");

        a1.print_forwards();
        a1.print_backwards();

        System.out.println(a1.last_index_of(10));
        System.out.println(a1.last_index_of(30));
        System.out.println(a1.last_index_of(50));

    	System.out.println("-------------------------------------------------");

        a1.remove(3);

    	int[] array = a1.to_array();

        for (int i = 0; i < array.length; ++i)
        {
            System.out.print(array[i] + " ");
        }

        System.out.println();

    	System.out.println("-------------------------------------------------");
    }
}



