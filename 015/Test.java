import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char x;
        System.out.print("Enter the first character: ");
        x = sc.next().charAt(0);

        char y;
        System.out.print("Enter the second character: ");
        y = sc.next().charAt(0);

        char z;
        System.out.print("Enter the third character: ");
        z = sc.next().charAt(0);

        System.out.println("\nYour characters are " + x + ", " + y + " and " + z);
    }
}