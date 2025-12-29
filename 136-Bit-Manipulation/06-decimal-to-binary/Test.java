/*
    Integer.toBinaryString(n) :-
    * In Java, this is built-in function to find the binary representation of an integer.
    * This static method returns a String that represents the unsigned integer
      value in base 2.
    * This (toBinaryString()) method belongs to the java.lang.Integer class.
*/

import java.util.Scanner;

class Test {
    public static String to_binary_string(int n) {
        String binary = "";
        while (n > 0) {
            // int bit = n % 2;
            // binary = bit + binary;
            // n = n / 2;

            //Using bitwise operator :-
            int bit = n & 1;
            binary = bit + binary;
            n = n >> 1;
        }

        return binary;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a decimal no.: ");
        int n = sc.nextInt();

        String binOf_n = Integer.toBinaryString(n);
        System.out.println("Decimal to binary(using built-in method): " + binOf_n);

        String binOf_N = to_binary_string(n);   //user defined function
        System.out.println("Decimal to binary(using user-defined method): " + binOf_N);
    }
}