import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);;

        int i;
        System.out.print("Enter the ith term: ");
        i = sc.nextInt();

        System.out.println("fibonacci of ith term: " + fibonacci(i));
    }

    static int fibonacci(int i)
    {
        if (i == 1)
        {
            return 0;
        }

        else if(i == 2)
        {
            return 1;
        }

        else
        {
            return fibonacci(i - 1) + fibonacci(i - 2);
        }
    }
}