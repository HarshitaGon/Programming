import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        System.out.println("Sum = " + sum(n));
    }

    static int sum(int n)
    {
        if (n == 1)
        {
            return 1;
        }

        else
        {
            return n + sum(n - 1);
        }
    }
}