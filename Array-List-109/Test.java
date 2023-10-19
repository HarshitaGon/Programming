import java.util.Scanner;
import java.util.ArrayList;

class Test {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<Integer>();

        System.out.println(arr.isEmpty());

        arr.add(10);
        arr.add(20);
        arr.add(30);

        System.out.println(arr.get(1));

        System.out.println(arr.isEmpty());

        System.out.println(arr.size());

        for (int i = 0; i < arr.size(); ++i) {
            System.out.print(arr.get(i) + " ");
        }

        System.out.println();

        arr.add(2, 40);

        for (int i = 0; i < arr.size(); ++i) {
            System.out.print(arr.get(i) + " ");
        }

        System.out.println();
    }
}











