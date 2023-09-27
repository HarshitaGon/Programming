import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int ll, ul;
        System.out.print("Emter lower and upper limits: ");
        ll = sc.nextInt();
        ul = sc.nextInt();

        System.out.println("The sum is " + sum(ll, ul));
    }

    static int sum(int ll, int ul) {
        int sum = 0;

        while (ll <= ul) {
            sum = sum + ll;
            ++ll;
        }

        return sum;
    }
}


/*
Enter lower and upper limits: 5 10
The sum is 45
*/