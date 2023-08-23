import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int ll, ul;
        System.out.print("Enter lower and upper limits: ");
        ll = sc.nextInt();
        ul = sc.nextInt();

        int sum = 0;

        if (ll == ul) {
            System.out.print(ll);
        }

        else {
            while (ll < ul) {
                sum = sum + ll;
                System.out.print(ll + " + ");
                ++ll;
            }

            System.out.print(ul);
        }

        System.out.println(" = " + (sum + ul));
    }
}