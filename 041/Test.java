import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a non-negative integer: ");
        n = sc.nextInt();

        int reverse = 0, temp = n;

        while (n > 0) {
            reverse = (reverse * 10) + (n % 10);
            n = n / 10;
        }

        if (reverse == temp)
            System.out.println(temp + " is a palindrome");
        else
            System.out.println(temp + " is not a palindrome");
    }
}



/*

1)
Enter a non-negative integer: 1234
1234 is not a palindrome

2)
Enter a non-negative integer: 1000
1000 is not a palindrome

3)
Enter a non-negative integer: 12321
12321 is a palindrome

*/