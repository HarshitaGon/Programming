#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct string
{
    char* arr;
    int size;
    int capacity;
};

typedef struct string String;

void String_create_empty(String*);
void String_assign_using_null_terminated_array_of_char(String*, const char*);
void String_destroy(String*);

int main(void)
{
    String s1;
    String_create_empty(&s1);

    String_assign_using_null_terminated_array_of_char(&s1, "hello");

    String_destroy(&s1);

    return 0;
}

void String_create_empty(String* ptr)
{
    ptr->arr = malloc(sizeof (char));

    if (ptr->arr == NULL)
   {
        printf("\n-------------------------------------");
        printf("\nString_create_empty()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    ptr->size = 0;
    ptr->capacity = 1;
}

void String_assign_using_null_terminated_array_of_char(String* ptr,
                                                       const char* s)
{
    int length = 0;

    while (s[length] != '\0')
    {
        ++length;
    }

    ptr->size = length;

    ptr->capacity = (length == 0) ? 1 : length;
    ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (char));

    if (ptr->arr == NULL)
    {
        printf("\n---------------------------------------------------");
        printf("\nString_assign_using_null_terminated_array_of_char()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n---------------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < length; ++i)
    {
        (ptr->arr)[i] = s[i];
    }
}

void String_destroy(String* ptr)
{
}



