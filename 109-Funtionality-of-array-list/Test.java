import java.util.Scanner;
import java.util.ArrayList;

class Test
{
    public static void main(String[] args)
    {
        ArrayList<Integer> arr = new ArrayList<Integer>();

        System.out.println("-------------------------------------------------");

        System.out.println(arr.isEmpty());

        System.out.println("-------------------------------------------------");

        arr.add(10);
        arr.add(20);
        arr.add(30);

        System.out.println(arr.get(1));

        System.out.println("-------------------------------------------------");

        System.out.println(arr.isEmpty());

        System.out.println(arr.size());

        System.out.println("-------------------------------------------------");

        for (int i = 0; i < arr.size(); ++i)
        {
            System.out.print(arr.get(i) + " ");
        }

        System.out.println();

        System.out.println("-------------------------------------------------");

        arr.set(2, 40);

        for (int i = 0; i < arr.size(); ++i)
        {
            System.out.print(arr.get(i) + " ");
        }

        System.out.println();

        System.out.println("-------------------------------------------------");

        arr.add(1, 50);

        for (int i = 0; i < arr.size(); ++i)
        {
            System.out.print(arr.get(i) + " ");
        }

        System.out.println();

        System.out.println("-------------------------------------------------");

        arr.clear();

        System.out.println(arr.size());

        System.out.println("-------------------------------------------------");

        arr.add(10);
        arr.add(20);
        arr.add(30);
        arr.add(40);
        arr.add(10);
        arr.add(20);

        for (int i = 0; i < arr.size(); ++i)
        {
            System.out.print(arr.get(i) + " ");
        }

        System.out.println();

        System.out.println(arr.contains(30));

        System.out.println(arr.contains(50));

        System.out.println("-------------------------------------------------");

        for (int i = 0; i < arr.size(); ++i)
        {
            System.out.print(arr.get(i) + " ");
        }

        System.out.println();

        System.out.println(arr.indexOf(10));

        System.out.println(arr.indexOf(30));

        System.out.println(arr.indexOf(50));

        System.out.println("-------------------------------------------------");

        for (int i = 0; i < arr.size(); ++i)
        {
            System.out.print(arr.get(i) + " ");
        }

        System.out.println();

        System.out.println(arr.lastIndexOf(10));

        System.out.println(arr.lastIndexOf(30));

        System.out.println(arr.lastIndexOf(50));

        System.out.println("-------------------------------------------------");

        arr.remove(3);

        for (int i = 0; i < arr.size(); ++i)
        {
            System.out.print(arr.get(i) + " ");
        }

        System.out.println();

        System.out.println("-------------------------------------------------");

        // No built-in method for removeRange in Java

        Integer[] array = arr.toArray(new Integer[arr.size()]);

        for (int i = 0; i < array.length; ++i)
        {
            System.out.print(array[i] + " ");
        }

        System.out.println();

        System.out.println("-------------------------------------------------");
    }
}