import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int ll, ul;
        System.out.print("Enter lower and upper limits: ");
        ll = sc.nextInt();
        ul = sc.nextInt();

        ll = ll + (ll % 2);
        ul = ul - (ul % 2);

        int sum = 0;

        System.out.println("\nSum of even numbers -");

        while (ll < ul) {
            sum = sum + ll;
            System.out.print(ll + " + ");
            ll = ll + 2;
        }

        System.out.println(ul + " = " + (sum + ul));
    }
}


/*

Enter lower and upper limits: 7 14

Sum of even numbers -
8 + 10 + 12 + 14 = 44

*/