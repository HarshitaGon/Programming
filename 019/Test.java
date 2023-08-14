import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char x;
        System.out.print("Enter a lowercase letter: ");
        x = sc.next().charAt(0);

        if ((x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u'))
            System.out.println(x + " is a vowel");
        else
            System.out.println(x + " is a consonant");
    }
}