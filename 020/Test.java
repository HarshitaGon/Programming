import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int remaining_amount;
        System.out.print("Enter an amount: Rs. ");
        remaining_amount = sc.nextInt();

        System.out.println("\nThe notes required are :-");

        System.out.println("2000: " + (remaining_amount / 2000));

        remaining_amount = remaining_amount % 2000;
        System.out.println("500: " + (remaining_amount / 500));

        remaining_amount = remaining_amount % 500;
        System.out.println("200: " + (remaining_amount / 200));

        remaining_amount = remaining_amount % 200;
        System.out.println("100: " + (remaining_amount / 100));

        remaining_amount = remaining_amount % 100;
        System.out.println("50: " + (remaining_amount / 50));

        remaining_amount = remaining_amount % 50;
        System.out.println("20: " + (remaining_amount / 20));

        remaining_amount = remaining_amount % 20;
        System.out.println("10: " + (remaining_amount / 10));

        remaining_amount = remaining_amount % 10;
        System.out.println("5: " + (remaining_amount / 5));

        remaining_amount = remaining_amount % 5;
        System.out.println("2: " + (remaining_amount / 2));

        remaining_amount = remaining_amount % 2;
        System.out.println("1: " + (remaining_amount / 1));
    }
}