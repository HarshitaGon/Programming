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
        if (size + ref_src.size() > capacity)
        {
            capacity = size + ref_src.size();

            char[] new_arr = new char[capacity];

            for (int j = 0; j < size; ++j)
            {
                new_arr[j] = arr[j];
            }

            arr = new_arr;
        }

        for (int i = size, j = 0; j < ref_src.size(); ++i, ++j)
        {
            // arr[i] = (ref_src.arr)[j];
            // This works even though arr is a private member because dst and
            // src are instances of the same class, and hence the private
            // members of src can be accessed from dst.
            // Still, this is considered bad practice.

            arr[i] = ref_src.char_at(j);
        }

        size += ref_src.size();
    }

    void clear()
    {
        arr = new char[1];
        size = 0;
        capacity = 1;
    }

    // void assign_using_user_input()
    // Skip this method.

    boolean is_empty()
    {
        return size == 0;
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

    void set_char_at(int i, char c)
    {
        if ((i < 0) || (i >= size))
        {
            throw new IndexOutOfBoundsException();
        }

        arr[i] = c;
    }

    boolean contains(char c)
    {
        for (int i = 0; i < size; ++i)
    	{
            if (arr[i] == c)
		    {
		        return true;
            }
        }

        return false;
    }

    boolean contains(My_String ref_src)
    {
        for (int i = 0; i <= size - ref_src.size(); ++i)
        {
            int j = 0;

            while (j < ref_src.size())
            {
                if (arr[i + j] != ref_src.char_at(j))
                {
                    break;
                }

                ++j;
            }

            if (j == ref_src.size())
            {
                return true;
            }
        }

        return false;
    }

    int index_of(char c)
    {
        for (int i = 0; i < size; ++i)
	    {
            if (arr[i] == c)
		    {
		        return i;
            }
        }

        return -1;
    }

    int index_of(My_String ref_src)
    {
        for (int i = 0; i <= size - ref_src.size(); ++i)
        {
            int j = 0;

            while (j < ref_src.size())
            {
                if (arr[i + j] != ref_src.char_at(j))
                {
                    break;
                }

                ++j;
            }

            if (j == ref_src.size())
            {
                return i;
            }
        }

        return -1;
    }

    int last_index_of(char c)
    {
        for (int i = size - 1; i >= 0; --i)
    	{
            if (arr[i] == c)
		    {
		        return i;
            }
        }

        return -1;
    }

    int last_index_of(My_String ref_src)
    {
        for (int i = size - ref_src.size(); i >= 0; --i)
        {
            int j = 0;

            while (j < ref_src.size())
            {
                if (arr[i + j] != ref_src.char_at(j))
                {
                    break;
                }

                ++j;
            }

            if (j == ref_src.size())
            {
                return i;
            }
        }

        return -1;
    }

    int next_index_of(char c, int start)
    {
        if (start < 0)
        {
            throw new IndexOutOfBoundsException();
        }

        for (int i = start; i < size; ++i)
	    {
            if (arr[i] == c)
    		{
	    	    return i;
            }
        }

        return -1;
    }

    int next_index_of(My_String ref_src, int start)
    {
        if (start < 0)
        {
            throw new IndexOutOfBoundsException();
        }

        for (int i = start; i <= size - ref_src.size(); ++i)
        {
            int j = 0;

            while (j < ref_src.size())
            {
                if (arr[i + j] != ref_src.char_at(j))
                {
                    break;
                }

                ++j;
            }

            if (j == ref_src.size())
            {
                return i;
            }
        }

        return -1;
    }

    void assign_using_substring(My_String ref_src, int i, int j)
    {
        if ((i >= j) || (i < 0) || (j > ref_src.size()))
	    {
            throw new IndexOutOfBoundsException();
    	}

        size = j - i;

        capacity = (size == 0) ? 1 : size;

        arr = new char[capacity];

        for (int k = 0; k < size; ++k)
        {
            arr[k] = ref_src.char_at(i + k);
        }
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

            char[] new_arr = new char[capacity];

            for (int j = 0; j < size; ++j)
            {
                new_arr[j] = arr[j];
            }

            arr = new_arr;
    	}
    }

    void remove(int i, int j)
    {
        if ((i >= j) || (i < 0) || (j > size))
	    {
            throw new IndexOutOfBoundsException();
	    }

    	int offset = j - i;

    	for (int k = j; k < size; ++k)
	    {
    	    arr[k - offset] = arr[k];
	    }

    	size -= offset;

	    if (size < capacity / 2)
	    {
            capacity = (size == 0) ? 1 : size;

            char[] new_arr = new char[capacity];

            for (int k = 0; k < size; ++k)
            {
                new_arr[k] = arr[k];
            }

            arr = new_arr;
    	}
    }

    int compare_to(My_String ref_src)
    {
        int i = 0;

        while ((i < ref_src.size()) && (i < size))
        {
            if (ref_src.char_at(i) != arr[i])
            {
                break;
           }

           ++i;
        }

        if ((i == ref_src.size()) && (i == size))
        {
            return 0;
        }

        else if (i == ref_src.size())
        {
            return -1;
        }

        else if (i == size)
        {
            return 1;
        }

        else
        {
            if (ref_src.char_at(i) < arr[i])
            {
                return -1;
            }

            // This condition will never be true.
            // else if (ref_src.char_at(i) == arr[i])
            // {
            //     return 0;
            // }

            else
            {
                return 1;
            }
        }
    }

    int compare_to_ignore_case(My_String ref_src)
    {
        int i = 0;
        char c1 = 0, c2 = 0;

        while ((i < ref_src.size()) && (i < size))
        {
            c1 = ref_src.char_at(i);

            if ((c1 >= 'a') && (c1 <= 'z'))
            {
                c1 = (char) ('A' + (c1 - 'a'));
            }

            c2 = arr[i];

            if ((c2 >= 'a') && (c2 <= 'z'))
            {
                c2 = (char) ('A' + (c2 - 'a'));
            }

            if (c1 != c2)
            {
                break;
            }

            ++i;
        }

        if ((i == ref_src.size()) && (i == size))
        {
            return 0;
        }

        else if (i == ref_src.size())
        {
            return -1;
        }

        else if (i == size)
        {
            return 1;
        }

        else
        {
            if (c1 < c2)
            {
                return -1;
            }

            // This condition will never be true.
            // else if (c1 == c2)
            // {
            //     return 0;
            // }

            else
            {
                return 1;
            }
        }
    }

    char[] to_array()
    {
        char[] new_arr = new char[size];

        for (int i = 0; i < size; ++i)
        {
            new_arr[i] = arr[i];
        }

        return new_arr;
    }

    String to_String()
    {
        return new String(arr, 0, size);
    }
}

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

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
        s2.assign(sc.nextLine());

        System.out.print("Your string: ");
        s2.print();
        System.out.println();

        System.out.println("-------------------------------------------------");

        System.out.print("Enter the destination string: ");
        s1.assign(sc.nextLine());

        System.out.print("Enter the source string: ");
        s2.assign(sc.nextLine());

        System.out.println(s1.contains(s2));

        System.out.println(s1.index_of(s2));

        System.out.println(s1.last_index_of(s2));

        int index = 0;

        while (true)
        {
            index = s1.next_index_of(s2, index);

            if (index == - 1)
            {
                break;
            }

            System.out.print(index + " ");
            ++index;
        }

        System.out.println();

        System.out.println("-------------------------------------------------");

        s1.assign("hello");
        s2.assign_using_substring(s1, 1, 4);

        s1.print();
        System.out.println();

        s2.print();
        System.out.println();

        System.out.println("-------------------------------------------------");

        s1.assign("hello world");
        s1.remove(4);

        s1.print();
        System.out.println();

        System.out.println("-------------------------------------------------");

        s1.assign("hello world");
        s1.remove(4, 8);

        s1.print();
        System.out.println();

        System.out.println("-------------------------------------------------");

        System.out.print("Enter the source string: ");
        s1.assign(sc.nextLine());

        System.out.print("Enter the destination string: ");
        s2.assign(sc.nextLine());

        System.out.println(s2.compare_to(s1));
        System.out.println(s2.compare_to_ignore_case(s1));

        System.out.println("-------------------------------------------------");
    }
}



