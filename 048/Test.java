import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n1, n2;
        System.out.print("Enter 2 positive integer: ");
        n1 = sc.nextInt();
        n2 = sc.nextInt();

        int i = 1;

        while ((i % n1 != 0) || (i % n2 != 0)) {
            ++i;
        }

        System.out.println("LCM = " + i);
    }
}



/*

1)
Enter 2 positive integers: 1 5
LCM = 5

2)
Enter 2 positive integers: 7 8
LCM = 56

*/