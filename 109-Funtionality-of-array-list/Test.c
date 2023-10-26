#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int arr[1000];
int size = 0;

bool array_list_int_is_empty(void);
void array_list_int_add(int);
int array_list_int_get(int);
int array_list_int_size(void);
void array_list_int_set(int, int);
void array_list_int_add_at_index(int, int);
void array_list_int_clear(void);
bool array_list_int_contains(int);
int array_list_int_index_of(int);
int array_list_int_last_index_of(int);
void array_list_int_remove(int);
void array_list_int_remove_range(int, int);
int* array_list_int_to_array(void);

int main(void)
{
    printf("---------------------------------------------------------------\n");

    printf(array_list_int_is_empty() ? "true\n" : "false\n");

    printf("---------------------------------------------------------------\n");

    array_list_int_add(10);
    array_list_int_add(20);
    array_list_int_add(30);

    printf("%d\n", array_list_int_get(1));

    printf("---------------------------------------------------------------\n");

    printf(array_list_int_is_empty() ? "true\n" : "false\n");

    printf("%d\n", array_list_int_size());

    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < array_list_int_size(); ++i)
    {
        printf("%d ", array_list_int_get(i));
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    array_list_int_set(2, 40);

    for (int i = 0; i < array_list_int_size(); ++i)
    {
        printf("%d ", array_list_int_get(i));
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    array_list_int_add_at_index(1, 50);

    for (int i = 0; i < array_list_int_size(); ++i)
    {
        printf("%d ", array_list_int_get(i));
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    array_list_int_clear();

    printf("%d\n", array_list_int_size());

    printf("---------------------------------------------------------------\n");

    array_list_int_add(10);
    array_list_int_add(20);
    array_list_int_add(30);
    array_list_int_add(40);
    array_list_int_add(10);
    array_list_int_add(20);

    for (int i = 0; i < array_list_int_size(); ++i)
    {
        printf("%d ", array_list_int_get(i));
    }

    printf("\n");

    printf(array_list_int_contains(30) ? "true\n" : "false\n");

    printf(array_list_int_contains(50) ? "true\n" : "false\n");

    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < array_list_int_size(); ++i)
    {
        printf("%d ", array_list_int_get(i));
    }

    printf("\n");

    printf("%d\n", array_list_int_index_of(10));

    printf("%d\n", array_list_int_index_of(30));

    printf("%d\n", array_list_int_index_of(50));

    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < array_list_int_size(); ++i)
    {
        printf("%d ", array_list_int_get(i));
    }

    printf("\n");

    printf("%d\n", array_list_int_last_index_of(10));

    printf("%d\n", array_list_int_last_index_of(30));

    printf("%d\n", array_list_int_last_index_of(50));

    printf("---------------------------------------------------------------\n");

    array_list_int_remove(3);

    for (int i = 0; i < array_list_int_size(); ++i)
    {
        printf("%d ", array_list_int_get(i));
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    array_list_int_remove_range(1, 2);

    int* array = array_list_int_to_array();

    for (int i = 0; i < array_list_int_size(); ++i)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    free((void*) array);

    return 0;
}

bool array_list_int_is_empty(void)
{
    return size == 0;
}

void array_list_int_add(int n)
{
    arr[size] = n;
    ++size;
}

int array_list_int_get(int i)
{
    if ((i < 0) || (i >= size))
    {
        printf("\n======================");
        printf("\nEXITING DUE TO FAILURE");
        printf("\n======================\n");

        exit(EXIT_FAILURE);
    }

    return arr[i];
}

int array_list_int_size(void)
{
    return size;
}

void array_list_int_set(int i, int n)
{
    if ((i < 0) || (i >= size))
    {
        printf("\n======================");
        printf("\nEXITING DUE TO FAILURE");
        printf("\n======================\n");

        exit(EXIT_FAILURE);
    }

    arr[i] = n;
}

void array_list_int_add_at_index(int i, int n)
{
    if ((i < 0) || (i > size))
    {
        printf("\n======================");
        printf("\nEXITING DUE TO FAILURE");
        printf("\n======================\n");

        exit(EXIT_FAILURE);
    }

    for (int j = size - 1; j >= i; --j)
    {
        arr[j + 1] = arr[j];
    }

    arr[i] = n;
    ++size;
}

void array_list_int_clear(void)
{
    size = 0;
}

bool array_list_int_contains(int n)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == n)
		{
			return true;
        }
    }

    return false;
}

int array_list_int_index_of(int n)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }

    return -1;
}

int array_list_int_last_index_of(int n)
{
    for (int i = size - 1; i >= 0; --i)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }

    return -1;
}

void array_list_int_remove(int i)
{
    if ((i < 0) || (i >= size))
    {
        printf("\n======================");
        printf("\nEXITING DUE TO FAILURE");
        printf("\n======================\n");

        exit(EXIT_FAILURE);
    }

    for (int j = i; j < size - 1; ++j)
    {
        arr[j] = arr[j + 1];
    }

    --size;
}

void array_list_int_remove_range(int i, int j)
{
    // ((i < 0) || (i >= size) || (j < 0) || (j >= size) || (i > j))
    if ((i > j) || (i < 0) || (j >= size))
    {
        printf("\n======================");
        printf("\nEXITING DUE TO FAILURE");
        printf("\n======================\n");

        exit(EXIT_FAILURE);
    }

    int offset = j - i + 1;

    for (int k = j + 1; k < size; ++k)
    {
        arr[k - offset] = arr[k];
    }

    size = size - offset;
}

int* array_list_int_to_array(void)
{
    int* array = (int*) malloc(size * sizeof (int));

    for (int i = 0; i < size; ++i)
    {
        array[i] = arr[i];
    }

    return array;
}