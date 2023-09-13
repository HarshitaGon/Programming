import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int terms;
        System.out.print("Enter the number of terms: ");
        terms = sc.nextInt();

        if (terms == 1) {
            System.out.println("0");
        }

        else {
            int term1 = 0, term2 = 1, next_term = 0;

            System.out.print(term1);

            while (terms > 2) {
                System.out.print(", " + term2);
                
                next_term = term1 + term2;
                term1 = term2;
                term2 = next_term;

                --terms;
            }

            System.out.println(" and " + term2);
        }
    }
}


/*
    1)
    Enter the number of terms: 1
    0

    2)
    Enter the number of terms: 2
    0 and 1

    3)
    Enter the number of terms: 3
    0, 1 and 1

    4)
    Enter the number of terms: 6
    0, 1, 1, 2, 3 and 5
*/