import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x;
        char y;
        System.out.print("Enter an integer: ");
        x = sc.nextInt();

        System.out.println("Your integer is " + x);

        System.out.print("\nEnter a character: ");
        y = sc.next().charAt(0);

        System.out.println("Your character is " + y);

        System.out.print("\nEnter a character: ");
        y = sc.next().charAt(0);

        System.out.println("Your character is " + y);

        System.out.print("\nEnter an integer: ");
        x = sc.nextInt();

        System.out.println("Your integer is " + x);
    }
}






/*

Enter an integer: 10
Your integer is 10

Enter a character: a
Your character is a

Enter a character: b
Your character is b

Enter an integer: 20
Your integer is 20

*/