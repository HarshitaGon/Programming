import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter a positive integer: ");
        n = sc.nextInt();

        if (n == 1) {
            System.out.println("Factors = 1");
        }

        else {
            System.out.print("Factors = 1");

            int i = 2;

            while (i < n) {
                if (n % i == 0) {
                    System.out.print(", " + i);
                }
                
                ++i;
            }

            System.out.println(" and " + i);
        }
    }
}



/*

1)
Enter a positive integer: 1
Factors = 1

2)
Enter a positive integer: 10
Factors = 1, 2, 5 and 10

3)
Enter a positive integer: 13
Factors = 1 and 13

*/