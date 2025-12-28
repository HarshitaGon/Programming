/*
    Question :-
    Given an array, in which every no. comes twice but there is a single no having
    single occurance so find and print that unique no.

    Input:
    n = 9
    arr = [3, 4, 6, 3, 6, 2, 1, 4, 2]
    output = 1
*/

import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; ++i) {
            arr[i] = sc.nextInt();
        }

        int unique = 0;
        for (int i = 0; i < n; ++i) {
            unique = unique ^ arr[i];
        }

        System.out.println("Unique no.: " + unique);
    }
}