import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter 2 integers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        if (a > b)
            System.out.println(a + " is greater");
        else if (b > a)
            System.out.println(b + " is greater");
        else
            System.out.println("They are equal ");

    }
}


/*

1)
Enter 2 integers: 10 5
10 is greater

2)
Enter 2 integers: 5 5
They are equal

*/