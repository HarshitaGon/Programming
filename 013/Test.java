import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char x;
        System.out.print("Enter 2 characters: ");

        x = sc.next().charAt(0);
        System.out.print("Your characters are " + x + " and ");

        x = sc.next().charAt(0);
        System.out.println(x);

    }
}

/*

Enter 2 characters: a b
Your characters are a and b

*/