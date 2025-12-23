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

//         // ref1 = 20; is changed to ref1 = Integer.valueOf(20); by the Java
//         // compiler.
//         // So, the previous integer variable (heap) storing 10 is destroyed, and
//         // a new integer variable (heap) storing 20 is created.
//         ref1 = 20;

//         System.out.println(ref1);

//         System.out.println(ref1);
//     }
// }




// In C, the statement int* ptr = (int*) malloc(sizeof (int)); creates an unnamed
// integer variable with initial garbage value on the heap and assigns its address
// to a pointer-to-integer variable called ptr on the stack.
// *ptr becomes the name of the integer variable on the heap.

// Similarly, in Java, the statement Integer ref = new Integer(10); creates an
// unnamed integer variable with initial value of 10 on the heap and assigns its
// address to a reference-to-integer variable called ref on the stack.

// new Integer(10) has been deprecated.
// So, Integer.valueOf(10) should be used instead of new Integer(10).

// In C, *ptr = 20; assigns the value of 20 to the integer variable on the heap.
// But, in Java, ref = 20; doesn't assign the value of 20 the integer variable on
// the heap.
// Instead, a new unnamed integer variable is created with initial value of 20 on
// the heap and its address is assigned to ref.
// The previous integer variable on the heap is destroyed.

// So,
// 1. ref = 20; is converted to ref = Integer.valueOf(20);
// 2. ref = sc.nextInt(); is converted to ref = Integer.valueOf(sc.nextInt());
// and so on.
// This process is known as autoboxing.

// In other situations when we use ref, then Java automatically understands that we
// mean the integer variable on the heap.
// For eg.,
// 1. System.out.println(ref); prints the value of the integer variable on the
//    heap.
// 2. ref + 2 adds 2 to the value of the integer variable on the heap.
// 3. ref / 10 divides the value of the integer variable on the heap by 10.
// 4. ++ref becomes ref = ref + 1. So, the value of the integer variable on the
//    heap is added to 1 and a new unnamed integer variable is created with initial
//    value of sum on the heap whose address is assigned to ref.
// and so on.
// This process is known as unboxing.