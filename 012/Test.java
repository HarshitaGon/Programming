import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char a, b;
        System.out.print("Enter 2 characters: ");
        a = sc.next().charAt(0);
        b = sc.next().charAt(0);

        System.out.println("Your integers are " + a + " and " + b);
    }
}

/*

sc.next() skips leading whitespaces, and stops at the first whitespace
after scanning a word (similar to %d in scanf()).

For eg., if the user enters hello1, then sc.next().charAt(0) will consume
h, e, l, l, o, 1, only assign h to the character, and discard e, l, l, o, 1.

*/