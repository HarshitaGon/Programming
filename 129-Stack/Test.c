#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct stack_int
{
    int* arr;
    int size;
    int capacity;
};

typedef struct stack_int Stack_int;

void Stack_int_create_empty(Stack_int*);
void Stack_int_destroy(Stack_int*);
int Stack_int_size(Stack_int*);
bool Stack_int_is_empty(Stack_int*);
void Stack_int_push(Stack_int*, int);
void Stack_int_display(Stack_int*);
int Stack_int_peek(Stack_int*);
void Stack_int_pop(Stack_int*);
void Stack_int_clear(Stack_int*);

// The array will contain the elements of the stack in a top-to-bottom order.
int* Stack_int_to_array(Stack_int*);

int main(void)
{
    // s1 is a name of the object handler.
    Stack_int s1;
    Stack_int_create_empty(&s1);

    printf("---------------------------------------------------------------\n");

    printf(Stack_int_is_empty(&s1) ? "true\n" : "false\n");

    printf("---------------------------------------------------------------\n");

    Stack_int_push(&s1, 10);
    Stack_int_push(&s1, 20);
    Stack_int_push(&s1, 30);
    Stack_int_push(&s1, 40);

    printf("Display the Elements (top to bottom) : \n");

    Stack_int_display(&s1);

    printf("---------------------------------------------------------------\n");

    printf("%d\n", Stack_int_peek(&s1));

    printf("---------------------------------------------------------------\n");

    printf(Stack_int_is_empty(&s1) ? "true\n" : "false\n");

    printf("%d\n", Stack_int_size(&s1));

    printf("---------------------------------------------------------------\n");

    Stack_int_clear(&s1);

    printf("%d\n", Stack_int_size(&s1));

    printf("---------------------------------------------------------------\n");

    Stack_int_push(&s1, 10);
    Stack_int_push(&s1, 20);
    Stack_int_push(&s1, 30);
    Stack_int_push(&s1, 40);
    Stack_int_push(&s1, 50);
    Stack_int_push(&s1, 60);

    printf("Display the Elements (top to bottom) : \n");

    Stack_int_display(&s1);

    printf("---------------------------------------------------------------\n");

    printf("%d\n", Stack_int_peek(&s1));

    printf("---------------------------------------------------------------\n");

    Stack_int_pop(&s1);
    Stack_int_pop(&s1);

    printf("Display the Elements (top to bottom (after popped)) : \n");

    Stack_int_display(&s1);

    printf("---------------------------------------------------------------\n");

    printf("%d\n", Stack_int_peek(&s1));

    printf("---------------------------------------------------------------\n");

    int* array = Stack_int_to_array(&s1);

    for (int i = 0; i < Stack_int_size(&s1); ++i)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("---------------------------------------------------------------\n");

    while (!(Stack_int_is_empty(&s1)))
    {
        Stack_int_pop(&s1);
    }

    printf("%d\n", Stack_int_size(&s1));

    printf("---------------------------------------------------------------\n");

    free(array);

    Stack_int_destroy(&s1);

    return 0;
}

void Stack_int_create_empty(Stack_int* ptr)
{
    ptr->arr = malloc(sizeof (int));

    if (ptr->arr == NULL)
    {
        printf("\n-------------------------------------");
        printf("\nStack_int_create_empty()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    ptr->size = 0;
    ptr->capacity = 1;
}

bool Stack_int_is_empty(Stack_int* ptr)
{
    return ptr->size == 0;
}

void Stack_int_push(Stack_int* ptr, int n)
{
    if (ptr->size == ptr->capacity)
    {
        ptr->capacity = ptr->capacity * 2;
        ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (int));
    }

    if (ptr->arr == NULL)
    {
        printf("\n-------------------------------------");
        printf("\nStack_int_push()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    (ptr->arr)[ptr->size] = n;
    ++(ptr->size);
}

void Stack_int_display(Stack_int* ptr)
{
    if (ptr->size == 0)
    {
        printf("\n-------------------------------------------");
        printf("\nStack_int_display()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    for (int i = ptr->size - 1; i >= 0; --i)
    {
        printf("%d\n", ptr->arr[i]);
    }
}

int Stack_int_peek(Stack_int* ptr)
{
    if (ptr->size == 0)
    {
        printf("\n-------------------------------------------");
        printf("\nStack_int_peek()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    return (ptr->arr)[ptr->size - 1];
}

int Stack_int_size(Stack_int* ptr)
{
    return ptr->size;
}

// void Stack_int_clear(Stack_int* ptr)
// {
//     Stack_int_destroy(ptr);
//     Stack_int_create_empty(ptr);
// }

void Stack_int_clear(Stack_int* ptr)
{
    ptr->arr = realloc(ptr->arr, sizeof (int));

    if (ptr->arr == NULL)
    {
        printf("\n-------------------------------------");
        printf("\nStack_int_clear()");
        printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------\n");

        exit(EXIT_FAILURE);
    }
    ptr->size = 0;
    ptr->capacity = 1;
}

void Stack_int_pop(Stack_int* ptr)
{
    if (ptr->size == 0)
    {
        printf("\n-------------------------------------------");
        printf("\nStack_int_pop()");
        printf("\nINDEX OUT OF BOUNDS, EXITING DUE TO FAILURE");
        printf("\n-------------------------------------------\n");

        exit(EXIT_FAILURE);
    }

    --(ptr->size);

    if (ptr->size < ptr->capacity / 2)
    {
        ptr->capacity = (ptr->size == 0 ? 1 : ptr->size);
        ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (int));

        if (ptr->arr == NULL)
        {
            printf("\n-------------------------------------");
            printf("\nStack_int_pop()");
            printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
            printf("\n-------------------------------------\n");

            exit(EXIT_FAILURE);
        }
    }
}

int* Stack_int_to_array(Stack_int* ptr)
{
    int* array = malloc(ptr->size * sizeof (int));

    for (int i = 0; i < ptr->size; ++i)
    {
        array[i] = ptr->arr[ptr->size -1 -i];
    }

    return array;
}

void Stack_int_destroy(Stack_int* ptr)
{
    free(ptr->arr);
}

/*

As usual, a->b is equivalent to (*a).b and x[i] is equivalent to *(x + i).

malloc() allocates memory starting at an address which is a multiple of the
largest alignment requirement of the system (for eg., 16) in order to satisfy
the alignment requirement for all possible data types.

The size of Stack_int is 16.
The alignment requirement of Stack_int is 8.

Don't get confused between the stack data structure and the stack memory.

--------------------------------------------------------------------------------

main()
Stack_int s1;

Stack:       |-------|
         400 |       |  Name 1 - s1.arr
             |   ?   |
             |       |
             |-------|
             |       |  Name 1 - s1.size
             |   ?   |
             |       |
             |-------|
             |       |  Name 1 - s1.capacity
             |   ?   |
         415 |       |
             |-------|

--------------------------------------------------------------------------------

Stack_int_create_empty(&s1);

Stack:       |-------|
         200 |       |  Name 1 - ptr
             |  400  |
         207 |       |
             |-------|

             |-------|
         400 |       |  Name 1 - XXXXX
             |   ?   |  Name 2 - ptr->arr
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   ?   |  Name 2 - ptr->size
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   ?   |  Name 2 - ptr->capacity
         415 |       |
             |-------|

--------------------------------------------------------------------------------

ptr->arr = malloc(sizeof (int));

Stack:       |-------|
         200 |       |  Name 1 - ptr
             |  400  |
         207 |       |
             |-------|

             |-------|
         400 |       |  Name 1 - XXXXX
             |  800  |  Name 2 - ptr->arr
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   ?   |  Name 2 - ptr->size
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   ?   |  Name 2 - ptr->capacity
         415 |       |
             |-------|

Heap:        |-------|
         800 |       |  Name 1 - XXXXX
             |   ?   |  Name 2 - (ptr->arr)[0]
         803 |       |
             |-------|

--------------------------------------------------------------------------------

ptr->size = 0;

Stack:       |-------|
         200 |       |  Name 1 - ptr
             |  400  |
         207 |       |
             |-------|

             |-------|
         400 |       |  Name 1 - XXXXX
             |  800  |  Name 2 - ptr->arr
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   0   |  Name 2 - ptr->size
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   ?   |  Name 2 - ptr->capacity
         415 |       |
             |-------|

Heap:        |-------|
         800 |       |  Name 1 - XXXXX
             |   ?   |  Name 2 - (ptr->arr)[0]
         803 |       |
             |-------|

--------------------------------------------------------------------------------

ptr->capacity = 1;

Stack:       |-------|
         200 |       |  Name 1 - ptr
             |  400  |
         207 |       |
             |-------|

             |-------|
         400 |       |  Name 1 - XXXXX
             |  800  |  Name 2 - ptr->arr
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   0   |  Name 2 - ptr->size
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   1   |  Name 2 - ptr->capacity
         415 |       |
             |-------|

Heap:        |-------|
         800 |       |  Name 1 - XXXXX
             |   ?   |  Name 2 - (ptr->arr)[0]
         803 |       |
             |-------|

--------------------------------------------------------------------------------

main()

Stack:       |-------|
         400 |       |  Name 1 - s1.arr
             |  800  |
             |       |
             |-------|
             |       |  Name 1 - s1.size
             |   0   |
             |       |
             |-------|
             |       |  Name 1 - s1.capacity
             |   1   |
         415 |       |
             |-------|

Heap:        |-------|
         800 |       |  Name 1 - (s1.arr)[0]
             |   ?   |
         803 |       |
             |-------|

--------------------------------------------------------------------------------

Stack_int_push(&s1, 10);

Stack:       |-------|
         200 |       |  Name 1 - ptr
             |  400  |
         207 |       |
             |-------|

             |-------|
         400 |       |  Name 1 - XXXXX
             |  800  |  Name 2 - ptr->arr
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   0   |  Name 2 - ptr->size
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   1   |  Name 2 - ptr->capacity
         415 |       |
             |-------|

             |-------|
         100 |       | Name 1 - n
             |   10  |
         103 |       |
             |-------|

Heap:        |-------|
         800 |       |  Name 1 - XXXXX
             |   ?   |  Name 2 - (ptr->arr)[0]
         803 |       |
             |-------|

--------------------------------------------------------------------------------

(ptr->arr)[ptr->size] = n;

Stack:       |-------|
         200 |       |  Name 1 - ptr
             |  400  |
         207 |       |
             |-------|

             |-------|
         400 |       |  Name 1 - XXXXX
             |  800  |  Name 2 - ptr->arr
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   0   |  Name 2 - ptr->size
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   1   |  Name 2 - ptr->capacity
         415 |       |
             |-------|

             |-------|
         100 |       | Name 1 - n
             |   10  |
         103 |       |
             |-------|

Heap:        |-------|
         800 |       |  Name 1 - XXXXX
             |   10  |  Name 2 - (ptr->arr)[0]
         803 |       |
             |-------|

--------------------------------------------------------------------------------

++(ptr->size);

Stack:       |-------|
         200 |       |  Name 1 - ptr
             |  400  |
         207 |       |
             |-------|

             |-------|
         400 |       |  Name 1 - XXXXX
             |  800  |  Name 2 - ptr->arr
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   1   |  Name 2 - ptr->size
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   1   |  Name 2 - ptr->capacity
         415 |       |
             |-------|

             |-------|
         100 |       | Name 1 - n
             |   10  |
         103 |       |
             |-------|

Heap:        |-------|
         800 |       |  Name 1 - XXXXX
             |   10  |  Name 2 - (ptr->arr)[0]
         803 |       |
             |-------|

--------------------------------------------------------------------------------

main()

Stack:       |-------|
         400 |       |  Name 1 - s1.arr
             |  800  |
             |       |
             |-------|
             |       |  Name 1 - s1.size
             |   1   |
             |       |
             |-------|
             |       |  Name 1 - s1.capacity
             |   1   |
         415 |       |
             |-------|

Heap:        |-------|
         800 |       |  Name 1 - (s1.arr)[0]
             |   10  |
         803 |       |
             |-------|

--------------------------------------------------------------------------------

Stack_int_push(&s1, 20);

Stack:       |-------|
         200 |       |  Name 1 - ptr
             |  400  |
         207 |       |
             |-------|

             |-------|
         400 |       |  Name 1 - XXXXX
             |  800  |  Name 2 - ptr->arr
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   1   |  Name 2 - ptr->size
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   1   |  Name 2 - ptr->capacity
         415 |       |
             |-------|

             |-------|
         100 |       | Name 1 - n
             |   20  |
         103 |       |
             |-------|

Heap:        |-------|
         800 |       |  Name 1 - XXXXX
             |   10  |  Name 2 - (ptr->arr)[0]
         803 |       |
             |-------|

--------------------------------------------------------------------------------

ptr->capacity = ptr->capacity * 2;

Stack:       |-------|
         200 |       |  Name 1 - ptr
             |  400  |
         207 |       |
             |-------|

             |-------|
         400 |       |  Name 1 - XXXXX
             |  800  |  Name 2 - ptr->arr
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   1   |  Name 2 - ptr->size
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   2   |  Name 2 - ptr->capacity
         415 |       |
             |-------|

             |-------|
         100 |       | Name 1 - n
             |   20  |
         103 |       |
             |-------|

Heap:        |-------|
         800 |       |  Name 1 - XXXXX
             |   10  |  Name 2 - (ptr->arr)[0]
         803 |       |
             |-------|

--------------------------------------------------------------------------------

ptr->arr = realloc(ptr->arr, ptr->capacity * sizeof (int));
(assuming that memory was not available after address 803)

Stack:       |-------|
         200 |       |  Name 1 - ptr
             |  400  |
         207 |       |
             |-------|

             |-------|
         400 |       |  Name 1 - XXXXX
             |  1200 |  Name 2 - ptr->arr
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   1   |  Name 2 - ptr->size
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   2   |  Name 2 - ptr->capacity
         415 |       |
             |-------|

             |-------|
         100 |       | Name 1 - n
             |   20  |
         103 |       |
             |-------|

Heap:        |-------|
        1200 |       |  Name 1 - XXXXX
             |   10  |  Name 2 - (ptr->arr)[0]
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   ?   |  Name 2 - (ptr->arr)[1]
        1207 |       |
             |-------|

--------------------------------------------------------------------------------

(ptr->arr)[ptr->size] = n;

Stack:       |-------|
         200 |       |  Name 1 - ptr
             |  400  |
         207 |       |
             |-------|

             |-------|
         400 |       |  Name 1 - XXXXX
             |  1200 |  Name 2 - ptr->arr
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   1   |  Name 2 - ptr->size
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   2   |  Name 2 - ptr->capacity
         415 |       |
             |-------|

             |-------|
         100 |       | Name 1 - n
             |   20  |
         103 |       |
             |-------|

Heap:        |-------|
        1200 |       |  Name 1 - XXXXX
             |   10  |  Name 2 - (ptr->arr)[0]
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   20  |  Name 2 - (ptr->arr)[1]
        1207 |       |
             |-------|

--------------------------------------------------------------------------------

++(ptr->size);

Stack:       |-------|
         200 |       |  Name 1 - ptr
             |  400  |
         207 |       |
             |-------|

             |-------|
         400 |       |  Name 1 - XXXXX
             |  1200 |  Name 2 - ptr->arr
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   2   |  Name 2 - ptr->size
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   2   |  Name 2 - ptr->capacity
         415 |       |
             |-------|

             |-------|
         100 |       | Name 1 - n
             |   20  |
         103 |       |
             |-------|

Heap:        |-------|
        1200 |       |  Name 1 - XXXXX
             |   10  |  Name 2 - (ptr->arr)[0]
             |       |
             |-------|
             |       |  Name 1 - XXXXX
             |   20  |  Name 2 - (ptr->arr)[1]
        1207 |       |
             |-------|

--------------------------------------------------------------------------------

main()

Stack:       |-------|
         400 |       |  Name 1 - s1.arr
             |  1200 |
             |       |
             |-------|
             |       |  Name 1 - s1.size
             |   2   |
             |       |
             |-------|
             |       |  Name 1 - s1.capacity
             |   2   |
         415 |       |
             |-------|

Heap:        |-------|
        1200 |       |  Name 1 - (s1.arr)[0]
             |   10  |
             |       |
             |-------|
             |       |  Name 1 - (s1.arr)[1]
             |   20  |
        1207 |       |
             |-------|

*/