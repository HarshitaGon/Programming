import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        System.out.print("Enter two integers: ");
        Integer ref1;
        ref1 = sc.nextInt();

        Integer ref2;
        ref2 = sc.nextInt();

        System.out.println(ref1 + " + " + ref2 + " = " + (ref1 + ref2));
    }
}



// import java.util.Scanner;

// class Test
// {
//     public static void main(String[] args)
//     {
//         Scanner sc = new Scanner(System.in);

//         // This is similar to int* ptr1 = malloc(sizeof (int)); *ptr = 10; in C.
//         // This line creates a reference variable called ref1 on the stack and
//         // creates an integer variable on the heap whose initial value is 10.
//         // ref1 (stack) points to this integer variable (heap).
//         Integer ref1 = new Integer(10); // This has been deprecated.

//         // Integer ref 1 = new Integer(10); can also be written in the following
//         // 2 ways :-
//         // 1. Integer ref1 = Integer.valueOf(10);
//         // 2. Integer ref1 = 10;

//         // Integer ref1 = 10; is changed to Integer ref1 = Integer.valueOf(10);
//         // by the Java compiler.

//         // Since we are trying to print a value, therefore Java will
//         // automatically understand that we are talking about the heap variable.
//         System.out.println(ref1);

//         // ref1 = 20; is changed to ref1 = Integer.valueOf(10); by the Java
//         // compiler.
//         // So, the previous integer variable (heap) storing 10 is destroyed, and
//         // a new integer variable (heap) storing 20 is created.
//         ref1 = 20;

//         System.out.println(ref1);

//         System.out.println(ref1);
//     }
// }