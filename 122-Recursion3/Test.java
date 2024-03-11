import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        System.out.println("sum of digits = " + sum(n));
    }

    static int sum(int n)
    {
        if (n == 0)
        {
            return 0;
        }

        else
        {
            return (n % 10) + sum(n / 10);
        }
    }
}