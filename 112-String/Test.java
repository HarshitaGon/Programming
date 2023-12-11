import java.util.Scanner;

class My_String
{
    private char[] arr;
    private int size;
    private int capacity;

    My_String()
    {
        arr = new char[1];
        size = 0;
        capacity = 1;
    }

    void assign(String ref_src)
    {
        size = ref_src.length();

        capacity = (size == 0) ? 1 : size;

        arr = new char[capacity];

        for (int i = 0; i < size; ++i)
        {
            arr[i] = ref_src.charAt(i);
        }
    }

    void print()
    {
        for (int i = 0; i < size; ++i)
        {
            System.out.print(arr[i]);
        }
    }

    void assign(My_String ref_src)
    {
        size = ref_src.size();

        capacity = (size == 0) ? 1 : size;

        arr = new char[capacity];

        for (int i = 0; i < size; ++i)
        {
            arr[i] = ref_src.char_at(i);
        }
    }

    void add(char c)
    {
        if (size == capacity)
        {
            capacity = capacity * 2;

            char[] new_arr = new char[capacity];

            for (int i = 0; i < size; ++i)
            {
                new_arr[i] = arr[i];
            }

            arr = new_arr;
        }

        arr[size] = c;
        ++size;
    }

    void add(int i, char c)
    {
        if ((i < 0) || (i > size))
        {
            throw new IndexOutOfBoundsException();
        }

        if (size == capacity)
        {
            capacity = capacity * 2;

            char[] new_arr = new char[capacity];

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

        arr[i] = c;
        ++size;
    }

    void add(My_String ref_src)
    {
        if (size + ref_src.size > capacity)
        {
            capacity = size + ref_src.size;

            char[] new_arr = new char[capacity];

            for (int j = 0; j < size; ++j)
            {
                new_arr[j] = arr[j];
            }

            arr = new_arr;
        }

        for (int i = size, j = 0; j < ref_src.size; ++i, ++j)
        {
            // arr[i] = (ref_src.arr)[j];
            // This works even though arr is a private member because dst and
            // src are instances of the same class, and hence the private
            // members of src can be accessed from dst.
            // Still, this is considered bad practice.

            arr[i] = ref_src.char_at(j);
        }

        size += ref_src.size;
    }

    void clear()
    {
        arr = new char[1];
        size = 0;
        capacity = 1;
    }

    void assign_using_user_input()
    {
    }

    int size()
    {
        return size;
    }

    char char_at(int i)
    {
        if ((i < 0) || (i >= size))
        {
            throw new IndexOutOfBoundsException();
        }

        return arr[i];
    }
}

class Test
{
    public static void main(String[] args)
    {
        System.out.println("-------------------------------------------------");

        My_String s1 = new My_String();

        s1.assign("hello");

        s1.print();
        System.out.println();

        System.out.println("-------------------------------------------------");

        My_String s2 = new My_String();

        s2.assign(s1);
        s2.add('!');

        s2.print();
        System.out.println();

        System.out.println("-------------------------------------------------");

        s2.add(5, ' ');

        s2.print();
        System.out.println();

        System.out.println("-------------------------------------------------");

        s2.add(s1);

        s2.print();
        System.out.println();

        System.out.println("-------------------------------------------------");

        System.out.print("Enter a string: ");
        s2.assign_using_user_input();

        System.out.print("Your string: ");
        s2.print();
        System.out.println();

        System.out.println("-------------------------------------------------");
    }
}



