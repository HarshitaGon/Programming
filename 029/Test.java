import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int ll, ul;
        System.out.print("Enter lower and upper limits: ");
        ll = sc.nextInt();
        ul = sc.nextInt();

        while (ll < ul) {
            System.out.print(ll + ", ");
            ++ll;
        }

        System.out.println(ul);
    }
}