import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char x;
        System.out.print("Enter a character: ");
        x = sc.next().charAt(0);

        System.out.println("Your character is " + x);

    }
}







/*
Enter a character: a
Your character is a
*/



/*
char is used for characters.
It is actually an integer with a small range.

Every character has an ASCII value.
For eg., the ASCII value of 'a' is 97.
This means that whenever the value of a char variable is 'a', 97 is stored in
the memory (box).

Whenever it is used in expressions, char is promoted to int.
For eg., if we do 'a' + 'b', then this means 97 + 98.

For eg., in char c = 'a'; printf("%c\n", c);, first of all, the value of c
(i.e. 'a') will be converted to integer (i.e. 97), then 97 will be passed to
printf(), then 97 will be printed as a character, i.e. 'a'.
Also, if we do printf("%d\n", c), 97 will get printed.

Similarly, in char c = '1'; printf("%d\n", c);, 49 will get printed.

%c is used for characters.
When using %c with scanf, only 1 character from the input buffer is taken
out and used, even if it is a whitespace character.
The remaining characters are left in the input buffer.

Some useful ASCII values :-
'0' to '9' - 48 onwards
'A' to 'Z' - 65 onwards
'a' to 'z' - 97 onwards

*/