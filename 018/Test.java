import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char x;
        System.out.print("Enter a character: ");
        x = sc.next().charAt(0);

        if ((x >= 'a') && (x <= 'z'))
            System.out.println(x + " is a lowercase letter");
        else if ((x >= 'A') && (x <= 'Z'))
            System.out.println(x + " is an uppercase letter");
        else if ((x >= '0') && (x <= '9'))
            System.out.println(x + " is a digit");
        else
            System.out.println(x + " is a special character");
    }
}