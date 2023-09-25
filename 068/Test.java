import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a;
        System.out.print("Enter an integer: ");
        a = sc.nextInt();
        if (is_even(a))
            System.out.println(a + " is even");
        else
            System.out.println(a + " is odd");
    }

    static boolean is_even(int a) {
        //     if (a % 2 == 0)
        //         return true;
        //     else
        //         return false;
        
        return a % 2 == 0;
    }
}


/*

Enter an integer: 4
4 is even

*/