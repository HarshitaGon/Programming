class Array_List_int
{
    int[] arr;
    int size;
    int capacity;

    Array_List_int()
    {
        arr = new int[1];
        size = 0;
        capacity = 1;
    }

    Array_List_int(int initial_capacity)
    {
        arr = new int[initial_capacity];
        size = 0;
        capacity = initial_capacity;
    }

    boolean is_empty()
    {
        return size == 0;
    }

    void add(int n)
    {
        arr[size] = n;
        ++size;
    }

    int get(int i) {
        return arr[i];
    }

    int size() {
        return size;
    }
}

class Test
{
    public static void main(String[] args)
    {
        Array_List_int a1 = new Array_List_int();

        a1.is_empty();

        a1.add(10);
        a1.add(20);
        a1.add(30);

        for (int i = 0; i < arr.size(); ++i)
        {
            System.out.print(arr.get(i) + " ");
        }

        System.out.println();

    }
}
