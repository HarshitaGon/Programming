class Stack_int
{
    private int[] arr;
    private int size;
    private int capacity;

    Stack_int()
    {
        arr = new int[1];
        size = 0;
        capacity = 1;
    }

    // void Stack_int_create_empty()
    // {
    //     arr = new_arr[1];
    //     size = 0;
    //     capacity = 1;
    // }

    boolean is_empty()
    {
        return size == 0;
    }

    void push(int n)
    {
        if (size == capacity)
        {
            capacity = capacity * 2;

            int[] new_arr = new int[capacity];

            for (int i = 0; i < size; ++i)
            {
                new_arr[i] = arr[i];
            }

            arr = new_arr;
        }

        arr[size] = n;
        ++size;
    }

    void display()
    {
        if (size == 0)
        {
            throw new IndexOutOfBoundsException();
        }

        for (int i = size - 1; i >= 0; --i)
        {
            System.out.println(arr[i]);
        }
    }

    int peek()
    {
        if (size == 0)
        {
            throw new IndexOutOfBoundsException();
        }

        return arr[size - 1];
    }

    int Size()
    {
        return size;
    }

    void clear()
    {
        arr = new int[1];
        size = 0;
        capacity = 1;
    }

    void pop()
    {
        if (size == 0)
        {
            throw new IndexOutOfBoundsException();
        }

        --size;

        if (size < capacity / 2)
        {
            capacity = (size == 0 ? 1 : size);

            int[] new_arr = new int[capacity];

            for (int i = 0; i < size; ++i)
            {
                new_arr[i] = arr[i];
            }

            arr = new_arr;
        }
    }

    int[] to_array()
    {
        int[] new_arr = new int[size];

        for (int i = 0; i < size; ++i)
        {
            new_arr[i] = arr[size - 1 - i];
        }

        return new_arr;
    }
}

class Test
{
    public static void main(String[] args)
    {
        Stack_int s1 = new Stack_int();

        System.out.print("---------------------------------------------------------------\n");

        System.out.println(s1.is_empty());

        System.out.print("---------------------------------------------------------------\n");

        s1.push(10);
        s1.push(20);
        s1.push(30);
        s1.push(40);

        System.out.println("Display the Elements (top to bottom) : ");

        s1.display();

        System.out.print("---------------------------------------------------------------\n");

        System.out.println(s1.peek());

        System.out.print("---------------------------------------------------------------\n");

        System.out.println(s1.is_empty());

        System.out.println(s1.Size());

        System.out.print("---------------------------------------------------------------\n");

        s1.clear();

        System.out.println(s1.Size());

        System.out.print("---------------------------------------------------------------\n");

        s1.push(10);
        s1.push(20);
        s1.push(30);
        s1.push(40);
        s1.push(50);
        s1.push(60);

        System.out.println("Display the Elements (top to bottom) : ");

        s1.display();

        System.out.print("---------------------------------------------------------------\n");

        System.out.println(s1.peek());

        System.out.print("---------------------------------------------------------------\n");

        s1.pop();
        s1.pop();

        System.out.println("Display the Elements (top to bottom (after popped)) : ");

        s1.display();

        System.out.print("---------------------------------------------------------------\n");

        System.out.println(s1.peek());

        System.out.print("---------------------------------------------------------------\n");

        int[] array = s1.to_array();

        for (int i = 0; i < array.length; ++i)
        {
            System.out.print(array[i] + " ");
        }

        System.out.println();

        System.out.print("---------------------------------------------------------------\n");

        while (!(s1.is_empty()))
        {
            s1.pop();
        }

        System.out.println(s1.Size());

        System.out.print("---------------------------------------------------------------\n");
    }
}