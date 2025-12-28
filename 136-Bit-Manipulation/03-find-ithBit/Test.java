/*
    Question :-
    Find the ith bit of a no.

    Input:
    n - 19 (10011)
    ithBit = 4
    output = 0
*/

import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int ithBit = sc.nextInt();

        int mask = 1 << (ithBit - 1);
        int ans = n & mask;
        if (ans == 0)
            System.out.println("Bit present in i position: " + 0);
        else
            System.out.println("Bit present in i position: " + 1);
    }
}

// To find the i-th bit of a number:
// Create a mask using (1 << (i - 1)) and perform AND with n.
// If result is 0 → i-th bit is 0
// If result is non-zero → i-th bit is 1
