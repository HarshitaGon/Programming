import java.util.Scanner;

class Array_List_int
{
    private int[] arr;
    private int size;
    private int capacity;

    Array_List_int()
    {
        arr = new int[1];
        size = 0;
        capacity = 1;
    }

    // void create_empty_Array_List_int()
    // {
    //     arr = new int[1];
    //     size = 0;
    //     capacity = 1;
    // }

    Array_List_int(int init_capacity)
    {
        arr = new int[init_capacity];
        size = 0;
        capacity = init_capacity;
    }

    // void create_empty_Array_List_int_with_initial_capacity(int init_capacity)
    // {
    //     arr = new int[init_capacity];
    //     size = 0;
    //     capacity = init_capacity;
    // }

    boolean is_empty()
    {
        return size == 0;
    }

    void add(int n)
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

    int get(int i)
    {
        if ((i < 0) || (i >= size))
        {
            throw new IndexOutOfBoundsException();
        }

        return arr[i];
    }

    int size()
    {
        return size;
    }

    void set(int i, int n)
    {
        if ((i < 0) || (i >= size))
        {
            throw new IndexOutOfBoundsException();
        }

        arr[i] = n;
    }

    void add(int i, int n)
    {
        if ((i < 0) || (i > size))
        {
            throw new IndexOutOfBoundsException();
        }

        if (size == capacity)
        {
            capacity = capacity * 2;

            int[] new_arr = new int[capacity];

            for (int j = 0; j < size; ++j)
            {
                new_arr[j] = arr[j];
            }

            arr = new_arr;
        }

        for (int j = size - 1; j >= i; --j)
        {
            arr[j + 1] = arr[j];
        }

        arr[i] = n;
        ++size;
    }

    void clear()
    {
        arr = new int[1];
        size = 0;
        capacity = 1;
    }

    boolean contains(int n)
    {
        for (int i = 0; i < size; ++i)
    	{
            if (arr[i] == n)
		    {
		        return true;
            }
        }

        return false;
    }

    int index_of(int n)
    {
        for (int i = 0; i < size; ++i)
        {
            if (arr[i] == n)
            {
                return i;
            }
        }

        return -1;
    }

    int last_index_of(int n)
    {
        for (int i = size - 1; i >= 0; --i)
        {
            if (arr[i] == n)
            {
                return i;
            }
        }

        return -1;
    }

    void remove(int i)
    {
        if ((i < 0) || (i >= size))
        {
            throw new IndexOutOfBoundsException();
        }

        for (int j = i + 1; j < size; ++j)
        {
            arr[j - 1] = arr[j];
        }

        --size;

        if (size < capacity / 2)
        {
            capacity = (size == 0) ? 1 : size;

            int[] new_arr = new int[capacity];

            for (int j = 0; j < size; ++j)
            {
                new_arr[j] = arr[j];
            }

            arr = new_arr;
        }
    }

    void remove(int i, int j)
    {
        if ((i > j) || (i < 0) || (j >= size))
        {
            throw new IndexOutOfBoundsException();
        }

        int offset = j - i + 1;

        for (int k = j + 1; k < size; ++k)
        {
            arr[k - offset] = arr[k];
        }

        size = size - offset;

        if (size < capacity / 2)
        {
            capacity = (size == 0) ? 1 : size;

            int[] new_arr = new int[capacity];

            for (int k = 0; k < size; ++k)
            {
                new_arr[k] = arr[k];
            }

            arr = new_arr;
        }
    }

    int[] to_array()
    {
        int[] new_arr = new int[size];

        for (int i = 0; i < size; ++i)
        {
            new_arr[i] = arr[i];
        }

        return new_arr;
    }
}

class Test
{
    public static void main(String[] args)
    {
        Array_List_int a1 = new Array_List_int();
        // a1.create_empty_Array_List_int();

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

        for (int i = 0; i < a1.size(); ++i)
        {
            System.out.print(a1.get(i) + " ");
        }

        System.out.println();

        System.out.println("-------------------------------------------------");

        a1.set(2, 40);

        for (int i = 0; i < a1.size(); ++i)
        {
            System.out.print(a1.get(i) + " ");
        }

        System.out.println();

        System.out.println("-------------------------------------------------");

        a1.add(1, 50);

        for (int i = 0; i < a1.size(); ++i)
        {
            System.out.print(a1.get(i) + " ");
        }

        System.out.println();

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

        for (int i = 0; i < a1.size(); ++i)
        {
            System.out.print(a1.get(i) + " ");
        }

        System.out.println();

        System.out.println(a1.contains(30));

        System.out.println(a1.contains(50));

        System.out.println("-------------------------------------------------");

        for (int i = 0; i < a1.size(); ++i)
        {
            System.out.print(a1.get(i) + " ");
        }

        System.out.println();

        System.out.println(a1.index_of(10));

        System.out.println(a1.index_of(30));

        System.out.println(a1.index_of(50));

        System.out.println("-------------------------------------------------");

        for (int i = 0; i < a1.size(); ++i)
        {
            System.out.print(a1.get(i) + " ");
        }

        System.out.println();

        System.out.println(a1.last_index_of(10));

        System.out.println(a1.last_index_of(30));

        System.out.println(a1.last_index_of(50));

        System.out.println("-------------------------------------------------");

        a1.remove(3);

        for (int i = 0; i < a1.size(); ++i)
        {
            System.out.print(a1.get(i) + " ");
        }

        System.out.println();

        System.out.println("-------------------------------------------------");

        a1.remove(1, 2);

        int[] array = a1.to_array();

        for (int i = 0; i < array.length; ++i)
        {
            System.out.print(array[i] + " ");
        }

        System.out.println();

        System.out.println("-------------------------------------------------");
    }
}


