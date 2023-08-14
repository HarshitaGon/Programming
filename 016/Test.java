import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x;
        char y;
        System.out.print("Enter an integer and a character: ");
        x = sc.nextInt();
        y = sc.next().charAt(0);

        System.out.println("\nYour integer is " + x);
        System.out.println("Your character is " + y);
    }
}






/*

Enter an integer and a character: 10 a

Your integer is 10
Your character is a

*/