import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char x;
        System.out.print("Enter 5 characters: ");

        x = sc.next().charAt(0);
        System.out.print("Your characters are " + x + ", ");

        x = sc.next().charAt(0);
        System.out.print(x + ", ");

        x = sc.next().charAt(0);
        System.out.print(x + ", ");

        x = sc.next().charAt(0);
        System.out.print(x + " and ");

        x = sc.next().charAt(0);
        System.out.println(x);
    }
}


/*

Enter 5 characters: a b c d e
Your characters are a, b, c, d and e


*/