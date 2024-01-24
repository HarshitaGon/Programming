import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int a, b;
        System.out.print("Enter two no.: ");
        a = sc.nextInt();
        b = sc.nextInt();

        int ans = gcd(a, b);
        System.out.println("GCD and LCM of two no. are " + ans + " and "
                             + (a * b) / ans);

    }

    static int gcd(int a, int b)
    {
        if(b == 0)
        {
            return a;
        }

        else
        {
            return gcd(b, a % b);
        }
    }
}