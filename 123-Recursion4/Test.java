import java.util.Scanner;

class Test
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String ref = sc.nextLine();

        System.out.println(String_is_palindrome(ref, 0, ref.length() - 1));
    }

    static boolean String_is_palindrome(String ref, int i, int j)
    {
        if (i >= j)
        {
            return true;
        }

        else
        {
            return (ref.charAt(i) == ref.charAt(j)
                     && (String_is_palindrome(ref, i + 1, j - 1)));
        }
    }
}