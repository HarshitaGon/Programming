/*
    Question :-
    Reset ith bit of a no. (Explaination):
        resetting a bit means force that bit to become 0, no matter what it was before.
        If the i-th bit is already 0 → it stays 0
        If the i-th bit is 1 → it becomes 0
*/

import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int ithBit = sc.nextInt();

        int mask = ~(1 << (ithBit - 1));
        int ans = n & mask;

        int updatedBit = ans & (1 << (ithBit - 1));

        System.out.println(updatedBit);
    }
}