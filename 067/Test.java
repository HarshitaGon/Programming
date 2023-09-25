// import java.util.Scanner;

// class Test
// {
//     public static void main(String[] args)
//     {
//         Scanner sc = new Scanner(System.in);

//         int a, b;
//         System.out.print("Enter 2 integers: ");
//         a = sc.nextInt();
//         b = sc.nextInt();

//         print_sum(a, b);
//     }

//     static void print_sum(int a, int b)
//     {
//         System.out.println("Their sum is " + (a + b));
//     }
// }

import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int a, b;
        System.out.print("Enter 2 integers: ");
        a = sc.nextInt();
        b = sc.nextInt();

        System.out.println("Their sum is " + sum(a, b));
    }

    static int sum(int a, int b)
    {
        return a + b;
    }
}