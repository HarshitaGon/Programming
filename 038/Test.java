import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        int count = 0;

        System.out.print(n);

        while (n > 0) {
            n = n / 10;
            ++count;
        }

        System.out.println(" has " + count + " digits");
    }
}


/*

Enter a positive integer: 1024
1024 has 4 digits

*/