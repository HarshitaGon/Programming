#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int my_strlen(const char*);
void my_gets(char *);

int main(void)
{
    printf("sizeof \"hello\" - %zu\n", sizeof "hello");
    // printf("strlen(\"hello\") - %zu\n", strlen("hello"));
    printf("my_strlen(\"hello\") - %d\n\n", my_strlen("hello"));

    printf("char arr[] = \"hello world\";\n");
    char arr[] = "hello world";

    printf("sizeof arr - %zu\n", sizeof arr);
    printf("my_strlen(arr) - %d\n\n", my_strlen(arr));

    printf("arr[5] = '\\0';\n");
    arr[5] = '\0';

    printf("sizeof arr - %zu\n", sizeof arr);
    printf("my_strlen(arr) - %d\n\n", my_strlen(arr));

    printf("char arr2[1000];\n");
    char arr2[1000];

    printf("gets(arr2);\n");
    gets(arr2);

    printf("sizeof arr2 - %zu\n", sizeof arr2);
    printf("my_strlen(arr2) - %d\n\n", my_strlen(arr2));

    printf("my_gets(arr2);\n");
    my_gets(arr2);

    printf("sizeof arr2 - %zu\n", sizeof arr2);
    printf("my_strlen(arr2) - %d\n", my_strlen(arr2));

    return 0;
}

int my_strlen(const char* str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        ++i;
    }

    return i;
}

void my_gets(char* str)
{
    
}

/*

 * 1, 7, 0, -2, etc. are integer literals.
   1.0, 0.5, -4.7, etc. are double literals.
   'a', '.', etc. are character literals.

   Similarly, "hello", "hi there", etc. are string literals.

 * Integer, double, character, etc. literals aren't stored in memory.
   For eg., int x = 10;
   Here, 4 bytes are reserved in the stack memory for the variable called x, and
   10 is stored inside the variable.
   However, 10 isn't stored separately anywhere else.

 * String literals are stored in memory.
   For eg., char arr[] = "hello";
   Here, 6 bytes are reserved in the stack memory for the array called arr, and
   its contents are 'h', 'e', 'l', 'l', 'o' and '\0'.
   However, the string literal "hello" is stored separately in the data memory
   as well.

 * The data type of "hello" is char[6].
 * In printf("%zu\n", sizeof "hello");, "hello" isn't converted to a pointer
   because sizeof is an exception.
 * In func("hello"), "hello" is converted to a pointer to its first element.

 * So, in C, a string is a special case of a char array, i.e. a string is a char
   array with a null character ('\0') at the end.

 * char arr[] = "abcd"; is similar to char arr[] = {'a', 'b', 'c', 'd', '\0'};.
   However, there is one difference.
   In char arr[] = "abcd";, the contents of arr (stack memory) are 'a', 'b',
   'c', 'd' and '\0', and the data memory also contains another array whose
   contents are 'a', 'b', 'c', 'd' and '\0'.
   But, in char arr[] = {'a', 'b', 'c', 'd', '\0'};, only the contents of arr
   (stack memory) are 'a', 'b', 'c', 'd' and '\0', and there is no extra copy in
   the data memory.

 * char arr[] = "hello";
   In strlen("hello"), the loop runs over the array of the data memory.
   In strlen(arr), the loop runs over the array of the stack memory.

 * The gets() function reads an entire line upto the newline character (without
   skipping leading whitespaces) and discards the newline character after
   consuming it.
   This is different from scanf("%d"), scanf("%f"), scanf("%lf"), etc., where
   the leading whitespaces are skipped, and the newline character remains in the
   input buffer.
 * The gets() function has been deprecated, but it doesn't matter because we
   will not be using C's way of handling strings.

 */



