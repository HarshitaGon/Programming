import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int ll, ul;
        System.out.print("Enter lower and upper limits: ");
        ll = sc.nextInt();
        ul = sc.nextInt();

        if (ll == ul) {
            System.out.println(ll);
        }

        else if (ul - ll == 1) {
            System.out.println(ul + " and " + ll);
        }

        else {
            while (ul > (ll + 1)) {
                System.out.print(ul + ", ");
                --ul;
            }

            System.out.println((ll + 1) + " and " + ll);
        }
    }
}