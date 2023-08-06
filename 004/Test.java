import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter an integer: ");
        int n = sc.nextInt();
        
        if (n > 0)
            System.out.println(n + "is positive");
        else if (n < 0)
            System.out.println(n + "is negative");
        else
            System.out.println(n + "is zero");
    } 
}

/*

1)
Enter an integer: 5
5 is positive

2)
Enter an integer: 0
0 is zero

3)
Enter an integer: -2
-2 is negative

*/