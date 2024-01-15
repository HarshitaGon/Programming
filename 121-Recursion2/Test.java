import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        System.out.println("Factorial = " + factorial(n));
    }

    static int factorial(int n)
    {
        if (n == 0)
        {
            return 1;
        }

        else
        {
            return n * factorial(n - 1);
        }
    }
}