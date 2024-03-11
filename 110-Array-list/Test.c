#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct array_list_int
{
    int* arr;
    int size;
    int capacity;
};

typedef struct array_list_int Array_List_int;

void create_empty_Array_List_int(Array_List_int*);
void create_empty_Array_List_int_with_initial_capacity(Array_List_int*, int);
bool Array_List_int_is_empty(Array_List_int*);
void Array_List_int_add(Array_List_int*, int);
int Array_List_int_get(Array_List_int*, int);
int Array_List_int_size(Array_List_int*);
void Array_List_int_set(Array_List_int*, int, int);
void Array_List_int_add_at_index(Array_List_int*, int, int);
void Array_List_int_clear(Array_List_int*);
bool Array_List_int_contains(Array_List_int*, int);
int Array_List_int_index_of(Array_List_int*, int);
int Array_List_int_last_index_of(Array_List_int*, int);
void Array_List_int_remove(Array_List_int*, int);
void Array_List_int_remove_range(Array_List_int*, int, int);
int* Array_List_int_to_array(Array_List_int*);
void destroy_Array_List_int(Array_List_int*);

int main(void)
{
    Array_List_int a1;
    create_empty_Array_List_int(&a1);

    printf("---------------------------------------------------------------\n");

    printf(Array_List_int_is_empty(&a1) ? "true\n" : "false\n");

    printf("---------------------------------------------------------------\n");

    Array_List_int_add(&a1, 10);
    Array_List_int_add(&a1, 20);
    Array_List_int_add(&a1, 30);

    printf("%d\n", Array_List_int_get(&a1, 1));

    printf("---------------------------------------------------------------\n");

    printf(Array_List_int_is_empty(&a1) ? "true\n" : "false\n");

    printf("%d\n", Array_List_int_size(&a1));

    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    Array_List_int_set(&a1, 2, 40);

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    Array_List_int_add_at_index(&a1, 1, 50);

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    Array_List_int_clear(&a1);

    printf("%d\n", Array_List_int_size(&a1));

    printf("---------------------------------------------------------------\n");

    Array_List_int_add(&a1, 10);
    Array_List_int_add(&a1, 20);
    Array_List_int_add(&a1, 30);
    Array_List_int_add(&a1, 40);
    Array_List_int_add(&a1, 10);
    Array_List_int_add(&a1, 20);

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf(Array_List_int_contains(&a1, 30) ? "true\n" : "false\n");

    printf(Array_List_int_contains(&a1, 50) ? "true\n" : "false\n");

    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf("%d\n", Array_List_int_index_of(&a1, 10));

    printf("%d\n", Array_List_int_index_of(&a1, 30));

    printf("%d\n", Array_List_int_index_of(&a1, 50));

    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf("%d\n", Array_List_int_last_index_of(&a1, 10));

    printf("%d\n", Array_List_int_last_index_of(&a1, 30));

    printf("%d\n", Array_List_int_last_index_of(&a1, 50));

    printf("---------------------------------------------------------------\n");

    Array_List_int_remove(&a1, 3);

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", Array_List_int_get(&a1, i));
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    Array_List_int_remove_range(&a1, 1, 3);

    int* array = Array_List_int_to_array(&a1);

    for (int i = 0; i < Array_List_int_size(&a1); ++i)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    free(array);

    destroy_Array_List_int(&a1);

    return 0;
}

void create_empty_Array_List_int(Array_List_int* ptr)
{
    ptr->arr = malloc(sizeof (int));

    if (ptr->arr == NULL)
    {
        printf("\n-------------------------------------");
        printf("\ncreate_empty_Array_List_int()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    ptr->size = 0;
    ptr->capacity = 1;
}

void create_empty_Array_List_int_with_initial_capacity(Array_List_int* ptr,
                                                       int initial_capacity)
{
    ptr->arr = malloc(initial_capacity * sizeof (int));

    if (ptr->arr == NULL)
    {
        printf("\n---------------------------------------------------");
        printf("\ncreate_empty_Array_List_int_with_initial_capacity()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n---------------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    ptr->size = 0;
    ptr->capacity = initial_capacity;
}

bool Array_List_int_is_empty(Array_List_int* ptr)
{
    return ptr->size == 0;
}

void Array_List_int_add(Array_List_int* ptr, int n)
{
    if (ptr->size == ptr->capacity)
    {
        ptr->capacity = ptr->capacity * 2;
        ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (int));

        if (ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nArray_List_int_add()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }

    (ptr->arr)[ptr->size] = n;
    ++(ptr->size);
}

int Array_List_int_get(Array_List_int* ptr, int i)
{
    if ((i < 0) || (i >= ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nArray_List_int_get()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    return (ptr->arr)[i];
}

int Array_List_int_size(Array_List_int* ptr)
{
    return ptr->size;
}

void Array_List_int_set(Array_List_int* ptr, int i, int n)
{
    if ((i < 0) || (i >= ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nArray_List_int_set()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    (ptr->arr)[i] = n;
}

void Array_List_int_add_at_index(Array_List_int* ptr, int i, int n)
{
    if ((i < 0) || (i > ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nArray_List_int_add_at_index()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    if (ptr->size == ptr->capacity)
    {
        ptr->capacity = ptr->capacity * 2;
        ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (int));

        if (ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nArray_List_int_add_at_index()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }

    for (int j = ptr->size - 1; j >= i; --j)
    {
        (ptr->arr)[j + 1] = (ptr->arr)[j];
    }

    (ptr->arr)[i] = n;
    ++(ptr->size);
}

void Array_List_int_clear(Array_List_int* ptr)
{
    ptr->arr = realloc(ptr->arr, sizeof (int));

    if (ptr->arr == NULL)
    {
        printf("\n-------------------------------------");
        printf("\nArray_List_int_clear()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    ptr->size = 0;
    ptr->capacity = 1;

    // {
	//     destroy_Array_List_int(ptr);

	//     create_empty_Array_List_int(ptr);
    // }
}

bool Array_List_int_contains(Array_List_int* ptr, int n)
{
    for (int i = 0; i < ptr->size; ++i)
	{
        if ((ptr->arr)[i] == n)
		{
		    return true;
        }
    }

    return false;
}

int Array_List_int_index_of(Array_List_int* ptr, int n)
{
    for (int i = 0; i < ptr->size; ++i)
    {
        if ((ptr->arr)[i] == n)
        {
            return i;
        }
    }

    return -1;
}

int Array_List_int_last_index_of(Array_List_int* ptr, int n)
{
    for (int i = ptr->size - 1; i >= 0; --i)
    {
        if ((ptr->arr)[i] == n)
        {
            return i;
        }
    }

    return -1;
}

void Array_List_int_remove(Array_List_int* ptr, int i)
{
    if ((i < 0) || (i >= ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nArray_List_int_remove()");
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
            printf("\nArray_List_int_remove()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }
}

void Array_List_int_remove_range(Array_List_int* ptr, int i, int j)
{
    if ((i >= j) || (i < 0) || (j > ptr->size))
    {
        printf("\n-------------------------------------------");
        printf("\nArray_List_int_remove_range()");
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
            printf("\nArray_List_int_remove_range()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }
}

int* Array_List_int_to_array(Array_List_int* ptr)
{
    int* array = malloc(ptr->size * sizeof (int));

    for (int i = 0; i < ptr->size; ++i)
    {
        array[i] = (ptr->arr)[i];
    }

    return array;
}

void destroy_Array_List_int(Array_List_int* ptr)
{
    free(ptr->arr);
}


