import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int y;
        System.out.print("Enter a year: ");
        y = sc.nextInt();

        if (y % 4 == 0) {
            if (y % 100 == 0) { 
                if (y % 400 == 0)
                    System.out.println("It is a leap year");
                else
                    System.out.println("It is not a leap year");
            }

            else {
                System.out.println("It is a leap year");
            }
        }

        else {
            System.out.println("It is not a leap year");
        }

  
    }
}






/*

Enter a year: 1000
It is a leap year

*/