/*
    Question :-
    Set the ith bit of a no. (Explaination) :
        Setting a bit means force that bit to become 1, no matter what it was before.
        If the i-th bit is already 1 → it stays 1
        If the i-th bit is 0 → it becomes 1
*/

import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int ithBit = sc.nextInt();

        int mask = 1 << (ithBit - 1);
        int ans = n | mask;

        int updatedBit = ans & mask;

        if (updatedBit == 0)
            System.out.println(0);
        else
            System.out.println(1);
    }
}


// To set the ith bit of a number:
// Create a mask using (1 << (i - 1)) and OR it with the number.
// This forces the ith bit to become 1.
// To verify, check the ith bit again using AND with the same mask.
// AND result 0 → bit is 0, non-zero → bit is 1.
