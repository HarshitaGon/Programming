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

    destroy_Array_List_int(&a1);

    return 0;
}

void create_empty_Array_List_int(Array_List_int* ptr)
{
    ptr->arr = (int*) malloc(sizeof (int));

    if ((void*) ptr->arr == NULL)
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
    ptr->arr = (int*) malloc(initial_capacity * sizeof (int));

    if ((void*) ptr->arr == NULL)
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

        if ((void*) ptr->arr == NULL)
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

        if ((void*) ptr->arr == NULL)
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
    if (ptr->size == ptr->capacity)
    {
        ptr->capacity = 1;
        ptr->arr = realloc(ptr->arr, sizeof (int));

        if ((void*) ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nArray_List_int_add_at_index()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }

    ptr->size = 0;
}

void destroy_Array_List_int(Array_List_int* ptr)
{
    free((void*) ptr->arr);
}



