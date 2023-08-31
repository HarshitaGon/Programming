import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n1, n2;
        System.out.print("Enter 2 positive integers: ");
        n1 = sc.nextInt();
        n2 = sc.nextInt();

        int i = 1, hcf = 0;

        if (n1 > n2) {
            while (i <= n2) {
                if ((n2 % i == 0) && (n1 % i == 0))
                    hcf = i;
                ++i;
            }

            System.out.println("HCF = " + hcf);
        }

        else {
            while (i <= n1) {
                if ((n2 % i == 0) && (n1 % i == 0))
                    hcf = i;
                ++i;
            }

            System.out.println("HCF = " + hcf);
        }
    }
}



/*

1)
Enter 2 positive integers: 1 5
HCF = 1

2)
Enter 2 positive integers: 7 21
HCF = 7

*/