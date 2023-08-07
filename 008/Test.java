import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter 5 positive integers: ");
        /*int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        int n3 = sc.nextInt();
        int n4 = sc.nextInt();
        int n5 = sc.nextInt();

        int largest = n1;

        if (n2 > largest)
            largest = n2;

        if (n3 > largest)
            largest = n3;

        if (n4 > largest)
            largest = n4;
            
        if (n5 > largest)
            largest = n5;
        
        System.out.println(largest + " is the largest");


    }
}





/*

Enter 5 positive integers: 3 2 1 2 2
3 is the largest

*/



    int n = sc.nextInt();
    int largest = 0;
    
    if (n > largest)
        largest = n;
    
    n = sc.nextInt();
    
    if (n > largest)
        largest = n;
    
    n = sc.nextInt();
    
    if (n > largest)
        largest = n;
    
    n = sc.nextInt();
    
    if (n > largest)
        largest = n;
    
    n = sc.nextInt();
    
    if (n > largest)
        largest = n;
    
    System.out.println(largest + " is the largest");
  }
}
