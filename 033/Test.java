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

        if (ll == ul) {
            System.out.println(ll);
        }

        else {
            while (ll < ul - 2) {
                System.out.print(ll + ", ");
                ll = ll + 2;
            }

            System.out.println((ul - 2) + " and " + ul);
        }
    }
}


/*
Do the previous program using only 2 variables
*/