import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter an integer: ");
        n = sc.nextInt();
        
        if(n % 2 == 0)
            System.out.println(n + " is even");
        else 
            System.out.println(n + " is odd");
    }
}



/*

Enter an integer: 4
4 is even

*/