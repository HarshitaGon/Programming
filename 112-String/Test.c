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
void String_print(String*);
void String_assign_using_String(String*, String*);
void String_add_using_char(String*, char);
void String_add_at_index_using_char(String*, int, char);
void String_add_using_String(String*, String*);
void String_clear(String*);
void String_assign_using_user_input(String*);
bool String_is_empty(String*);
int String_size(String*);
char String_char_at(String*, int);
void String_set_char_at(String*, int, char);
bool String_contains_char(String*, char);
bool String_contains_String(String*, String*);
int String_index_of_char(String*, char);
int String_index_of_String(String*, String*);
int String_last_index_of_char(String*, char);
int String_last_index_of_String(String*, String*);
int String_next_index_of_char(String*, char, int);
int String_next_index_of_String(String*, String*, int);
void String_substring(String*, String*, int, int);
void String_remove(String*, int);
void String_remove_range(String*, int, int);
int String_compare_to(String*, String*);
int String_compare_to_ignore_case(String*, String*);
char* String_to_null_terminated_array_of_char(String*); // to_array_of_char() and to_String() in Java
void String_destroy(String*);

int main(void)
{
    printf("---------------------------------------------------------------\n");

    String s1;
    String_create_empty(&s1);

    String_assign_using_null_terminated_array_of_char(&s1, "hello");

    String_print(&s1);
    putchar('\n');

    printf("---------------------------------------------------------------\n");

    String s2;
    String_create_empty(&s2);

    String_assign_using_String(&s2, &s1);
    String_add_using_char(&s2, '!');

    String_print(&s2);
    putchar('\n');

    printf("---------------------------------------------------------------\n");

    String_add_at_index_using_char(&s2, 5, ' ');

    String_print(&s2);
    putchar('\n');

    printf("---------------------------------------------------------------\n");

    String_add_using_String(&s2, &s1);

    String_print(&s2);
    putchar('\n');

    printf("---------------------------------------------------------------\n");

    printf("Enter a string: ");
    String_assign_using_user_input(&s2);

    printf("Your string: ");
    String_print(&s2);
    putchar('\n');

    printf("---------------------------------------------------------------\n");

    printf("Enter the destination string: ");
    String_assign_using_user_input(&s1);

    printf("Enter the source string: ");
    String_assign_using_user_input(&s2);

    printf(String_contains_String(&s1, &s2) ? "true\n" : "false\n");

    printf("%d\n", String_index_of_String(&s1, &s2));

    printf("%d\n", String_last_index_of_String(&s1, &s2));

    int index = 0;

    while (true)
    {
        index = String_next_index_of_String(&s1, &s2, index);

        if (index == - 1)
        {
            break;
        }

        printf("%d ", index);
        ++index;
    }

    putchar('\n');

    printf("---------------------------------------------------------------\n");

    String_assign_using_null_terminated_array_of_char(&s1, "hello");
    String_substring(&s2, &s1, 1, 4);

    String_print(&s1);
    putchar('\n');

    String_print(&s2);
    putchar('\n');

    printf("---------------------------------------------------------------\n");

    String_assign_using_null_terminated_array_of_char(&s1, "hello world");
    String_remove(&s1, 4);

    String_print(&s1);
    putchar('\n');

    printf("---------------------------------------------------------------\n");

    String_assign_using_null_terminated_array_of_char(&s1, "hello world");
    String_remove_range(&s1, 4, 8);

    String_print(&s1);
    putchar('\n');

    printf("---------------------------------------------------------------\n");

    printf("Enter the source string: ");
    String_assign_using_user_input(&s1);

    printf("Enter the destination string: ");
    String_assign_using_user_input(&s2);

    printf("%d\n", String_compare_to(&s2, &s1));
    printf("%d\n", String_compare_to_ignore_case(&s2, &s1));

    printf("---------------------------------------------------------------\n");

    String_destroy(&s1);
    String_destroy(&s2);

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

void String_assign_using_null_terminated_array_of_char(String* ptr_dst,
                                                       const char* s)
{
    int length = 0;

    while (s[length] != '\0')
    {
        ++length;
    }

    ptr_dst->size = length;

    ptr_dst->capacity = (length == 0) ? 1 : length;
    ptr_dst->arr = realloc(ptr_dst->arr, ptr_dst->capacity * sizeof (char));

    if (ptr_dst->arr == NULL)
    {
        printf("\n---------------------------------------------------");
        printf("\nString_assign_using_null_terminated_array_of_char()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n---------------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < length; ++i)
    {
        (ptr_dst->arr)[i] = s[i];
    }
}

void String_print(String* ptr)
{
    for (int i = 0; i < ptr->size; ++i)
    {
        putchar((ptr->arr)[i]);
    }
}

void String_assign_using_String(String* ptr_dst, String* ptr_src)
{
    ptr_dst->size = ptr_src->size;

    ptr_dst->capacity = (ptr_dst->size == 0) ? 1 : ptr_dst->size;
    ptr_dst->arr = realloc(ptr_dst->arr, ptr_dst->capacity * sizeof (char));

    if (ptr_dst->arr == NULL)
    {
        printf("\n-------------------------------------");
        printf("\nString_assign_using_String()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < ptr_dst->size; ++i)
    {
        (ptr_dst->arr)[i] = (ptr_src->arr)[i];
    }
}

void String_add_using_char(String* ptr, char c)
{
    if (ptr->size == ptr->capacity)
    {
        ptr->capacity = ptr->capacity * 2;
        ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (char));

        if (ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nString_add_using_char()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }

    (ptr->arr)[ptr->size] = c;
    ++(ptr->size);
}

void String_add_at_index_using_char(String* ptr, int i, char c)
{
    if ((i < 0) || (i > ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nString_add_at_index_using_char()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    if (ptr->size == ptr->capacity)
    {
        ptr->capacity = ptr->capacity * 2;
        ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (char));

        if (ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nString_add_at_index_using_char()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }

    for (int j = ptr->size - 1; j >= i; --j)
    {
        (ptr->arr)[j + 1] = (ptr->arr)[j];
    }

    (ptr->arr)[i] = c;
    ++(ptr->size);
}

void String_add_using_String(String* ptr_dst, String* ptr_src)
{
    if (ptr_dst->size + ptr_src->size > ptr_dst->capacity)
    {
        ptr_dst->capacity = ptr_dst->size + ptr_src->size;
        ptr_dst->arr = realloc(ptr_dst->arr, ptr_dst->capacity * sizeof (char));

        if (ptr_dst->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nString_add_using_String()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }

    for (int i = ptr_dst->size, j = 0; j < ptr_src->size; ++i, ++j)
    {
        (ptr_dst->arr)[i] = (ptr_src->arr)[j];
    }

    ptr_dst->size += ptr_src->size;
}

void String_clear(String* ptr)
{
    ptr->arr = realloc(ptr->arr, sizeof (char));

    if (ptr->arr == NULL)
    {
        printf("\n-------------------------------------");
        printf("\nString_clear()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    ptr->size = 0;
    ptr->capacity = 1;
}

void String_assign_using_user_input(String* ptr)
{
    String_clear(ptr);

    while (true)
    {
        int c = getchar();

        if ((c == '\n') || (c == EOF))
        {
            break;
        }

        if (ptr->size == ptr->capacity)
        {
            ptr->capacity = ptr->capacity * 2;
            ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (char));

            if (ptr->arr == NULL)
            {
                printf("\n-------------------------------------");
                printf("\nString_assign_using_user_input()");
                printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
                printf("\n-------------------------------------\n");

                exit(EXIT_FAILURE);
            }
        }

        (ptr->arr)[ptr->size] = (char) c;
        ++(ptr->size);
    }
}

bool String_is_empty(String* ptr)
{
    return ptr->size == 0;
}

int String_size(String* ptr)
{
    return ptr->size;
}

char String_char_at(String* ptr, int i)
{
    if ((i < 0) || (i >= ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nString_char_at()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    return (ptr->arr)[i];
}

void String_set_char_at(String* ptr, int i, char c)
{
    if ((i < 0) || (i >= ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nString_set_char_at()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    (ptr->arr)[i] = c;
}

bool String_contains_char(String* ptr, char c)
{
    for (int i = 0; i < ptr->size; ++i)
	{
        if ((ptr->arr)[i] == c)
		{
		    return true;
        }
    }

    return false;
}

bool String_contains_String(String* ptr_dst, String* ptr_src)
{
    for (int i = 0; i <= ptr_dst->size - ptr_src->size; ++i)
    {
        int j = 0;

        while (j < ptr_src->size)
        {
            if ((ptr_dst->arr)[i + j] != (ptr_src->arr)[j])
            {
                break;
            }

            ++j;
        }

        if (j == ptr_src->size)
        {
            return true;
        }
    }

    return false;
}

int String_index_of_char(String* ptr, char c)
{
    for (int i = 0; i < ptr->size; ++i)
	{
        if ((ptr->arr)[i] == c)
		{
		    return i;
        }
    }

    return -1;
}

int String_index_of_String(String* ptr_dst, String* ptr_src)
{
    for (int i = 0; i <= ptr_dst->size - ptr_src->size; ++i)
    {
        int j = 0;

        while (j < ptr_src->size)
        {
            if ((ptr_dst->arr)[i + j] != (ptr_src->arr)[j])
            {
                break;
            }

            ++j;
        }

        if (j == ptr_src->size)
        {
            return i;
        }
    }

    return -1;
}

int String_last_index_of_char(String* ptr, char c)
{
    for (int i = ptr->size - 1; i >= 0; --i)
	{
        if ((ptr->arr)[i] == c)
		{
		    return i;
        }
    }

    return -1;
}

int String_last_index_of_String(String* ptr_dst, String* ptr_src)
{
    for (int i = ptr_dst->size - ptr_src->size; i >= 0; --i)
    {
        int j = 0;

        while (j < ptr_src->size)
        {
            if ((ptr_dst->arr)[i + j] != (ptr_src->arr)[j])
            {
                break;
            }

            ++j;
        }

        if (j == ptr_src->size)
        {
            return i;
        }
    }

    return -1;
}

int String_next_index_of_char(String* ptr, char c, int start)
{
    if (start < 0)
    {
        printf("\n-------------------------------------------");
        printf("\nString_next_index_of_char()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    for (int i = start; i < ptr->size; ++i)
	{
        if ((ptr->arr)[i] == c)
		{
		    return i;
        }
    }

    return -1;
}

int String_next_index_of_String(String* ptr_dst, String* ptr_src, int start)
{
    if (start < 0)
    {
        printf("\n-------------------------------------------");
        printf("\nString_next_index_of_String()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    for (int i = start; i <= ptr_dst->size - ptr_src->size; ++i)
    {
        int j = 0;

        while (j < ptr_src->size)
        {
            if ((ptr_dst->arr)[i + j] != (ptr_src->arr)[j])
            {
                break;
            }

            ++j;
        }

        if (j == ptr_src->size)
        {
            return i;
        }
    }

    return -1;
}

void String_substring(String* ptr_dst, String* ptr_src, int i, int j)
{
    if ((i >= j) || (i < 0) || (j > ptr_src->size))
	{
    	printf("\n-------------------------------------------");
    	printf("\nString_substring()");
    	printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
    	printf("\n-------------------------------------------\n");

    	exit(EXIT_FAILURE);
	}

    ptr_dst->size = j - i;

    ptr_dst->capacity = (ptr_dst->size == 0) ? 1 : ptr_dst->size;
    ptr_dst->arr = realloc(ptr_dst->arr, ptr_dst->capacity * sizeof (char));

    if (ptr_dst->arr == NULL)
    {
        printf("\n-------------------------------------");
        printf("\nString_assign_using_String()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    for (int k = 0; k < ptr_dst->size; ++k)
    {
        (ptr_dst->arr)[k] = (ptr_src->arr)[i + k];
    }
}

void String_remove(String* ptr, int i)
{
    if ((i < 0) || (i >= ptr->size))
	{
    	printf("\n-------------------------------------------");
    	printf("\nString_remove()");
    	printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
    	printf("\n-------------------------------------------\n");

    	exit(EXIT_FAILURE);
	}

	for (int j = i + 1; j < ptr->size; ++j)
	{
    	(ptr->arr)[j - 1] = (ptr->arr)[j];
	}

	--(ptr->size);

	if (ptr->size < ptr->capacity / 2)
	{
    	ptr->capacity = (ptr->size == 0) ? 1 : ptr->size;
    	ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (int));

    	if (ptr->arr == NULL)
    	{
        	printf("\n-------------------------------------");
        	printf("\nString_remove()");
        	printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        	printf("\n-------------------------------------\n");

        	exit(EXIT_FAILURE);
    	}
	}
}

void String_remove_range(String* ptr, int i, int j)
{
    if ((i >= j) || (i < 0) || (j > ptr->size))
	{
    	printf("\n-------------------------------------------");
    	printf("\nString_remove_range()");
    	printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
    	printf("\n-------------------------------------------\n");

    	exit(EXIT_FAILURE);
	}

	int offset = j - i;

	for (int k = j; k < ptr->size; ++k)
	{
    	(ptr->arr)[k - offset] = (ptr->arr)[k];
	}

	ptr->size -= offset;

	if (ptr->size < ptr->capacity / 2)
	{
    	ptr->capacity = (ptr->size == 0) ? 1 : ptr->size;
    	ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (int));

    	if (ptr->arr == NULL)
    	{
        	printf("\n-------------------------------------");
        	printf("\nString_remove_range()");
        	printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        	printf("\n-------------------------------------\n");

        	exit(EXIT_FAILURE);
    	}
	}
}

int String_compare_to(String* ptr_dst, String* ptr_src)
{
    int i = 0;

    while ((i < ptr_src->size) && (i < ptr_dst->size))
    {
        if ((ptr_src->arr)[i] != (ptr_dst->arr)[i])
        {
            break;
        }

        ++i;
    }

    if ((i == ptr_src->size) && (i == ptr_dst->size))
    {
        return 0;
    }

    else if (i == ptr_src->size)
    {
        return -1;
    }

    else if (i == ptr_dst->size)
    {
        return 1;
    }

    else
    {
        if ((ptr_src->arr)[i] < (ptr_dst->arr)[i])
        {
            return -1;
        }

        // This condition will never be true.
        // else if ((ptr_src->arr)[i] == (ptr_dst->arr)[i])
        // {
        //     return 0;
        // }

        else
        {
            return 1;
        }
    }
}

int String_compare_to_ignore_case(String* ptr_dst, String* ptr_src)
{
    int i = 0;
    char c1, c2;

    while ((i < ptr_src->size) && (i < ptr_dst->size))
    {
        c1 = (ptr_src->arr)[i];

        if ((c1 >= 'a') && (c1 <= 'z'))
        {
            c1 = 'A' + (c1 - 'a');
        }

        c2 = (ptr_dst->arr)[i];

        if ((c2 >= 'a') && (c2 <= 'z'))
        {
            c2 = 'A' + (c2 - 'a');
        }

        if (c1 != c2)
        {
            break;
        }

        ++i;
    }

    if ((i == ptr_src->size) && (i == ptr_dst->size))
    {
        return 0;
    }

    else if (i == ptr_src->size)
    {
        return -1;
    }

    else if (i == ptr_dst->size)
    {
        return 1;
    }

    else
    {
        if (c1 < c2)
        {
            return -1;
        }

        // This condition will never be true.
        // else if (c1 == c2)
        // {
        //     return 0;
        // }

        else
        {
            return 1;
        }
    }
}

char* String_to_null_terminated_array_of_char(String* ptr)
{
    char* array = malloc((ptr->size + 1) * sizeof (char));

	for (int i = 0; i < ptr->size; ++i)
	{
    	array[i] = (ptr->arr)[i];
	}

    array[ptr->size] = '\0';

	return array;
}

void String_destroy(String* ptr)
{
    free(ptr->arr);
}


