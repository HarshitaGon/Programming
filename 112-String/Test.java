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

    void assign(String src)
    {
        size = src.length();

        capacity = (size == 0) ? 1 : size;

        arr = new char[capacity];

        for (int i = 0; i < size; ++i)
        {
            arr[i] = src.charAt(i);
        }
    }

    void print()
    {
        for (int i = 0; i < size; ++i)
        {
            System.out.print(arr[i]);
        }
    }

    void assign(My_String src)
    {
        size = src.size();

        capacity = (size == 0) ? 1 : size;

        arr = new char[capacity];

        for (int i = 0; i < size; ++i)
        {
            arr[i] = src.char_at(i);
        }
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

    void add(char c)
    {
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
    }
}



