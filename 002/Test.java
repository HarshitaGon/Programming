import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter an integer: ");
        int n = sc.nextInt();

        System.out.println("Your integer is " + n);
    }
}

/*

sc.nextInt() follows the same logic as %d with scanf() in C

 */