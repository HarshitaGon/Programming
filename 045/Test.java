import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        int factorial = 1;
        System.out.print(n + "!" + " = ");

        if (n == 1) {
            System.out.println(n);
        }

        else {
            while (n > 1) {
                factorial = factorial * n;
                System.out.print(n + " x ");
                --n;
            }
    
            System.out.println(n + " = " + factorial);
        }
    }
}


/*

1)
Enter a positive integer: 1
1! = 1

2)
Enter a positive integer: 5
5! = 5 x 4 x 3 x 2 x 1 = 120

*/