#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct stack_int_node
{
    int value;
    struct stack_int_node* ptr_next_node;
};

typedef struct stack_int_node Stack_int_Node;

struct stack_int
{
    Stack_int_Node* ptr_head_node;
    int size;
};

typedef struct stack_int Stack_int;

void Stack_int_create_empty(Stack_int*);
void Stack_int_destroy(Stack_int*);
int Stack_int_size(Stack_int*);
bool Stack_int_is_empty(Stack_int*);
void Stack_int_push(Stack_int*, int);
int Stack_int_peek(Stack_int*);
// void Stack_int_pop(Stack_int*);
// void Stack_int_clear(Stack_int*);

// The array will contain the elements of the stack in a top-to-bottom order.
// int* Stack_int_to_array(Stack_int*);

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

    printf("%d\n", Stack_int_peek(&s1));

    printf("---------------------------------------------------------------\n");

    printf(Stack_int_is_empty(&s1) ? "true\n" : "false\n");

    printf("%d\n", Stack_int_size(&s1));

    printf("---------------------------------------------------------------\n");

    // Stack_int_clear(&s1);

    // printf("%d\n", Stack_int_size(&s1));

    // printf("---------------------------------------------------------------\n");

    // Stack_int_push(&s1, 10);
    // Stack_int_push(&s1, 20);
    // Stack_int_push(&s1, 30);
    // Stack_int_push(&s1, 40);
    // Stack_int_push(&s1, 50);
    // Stack_int_push(&s1, 60);

    // printf("%d\n", Stack_int_peek(&s1));

    // printf("---------------------------------------------------------------\n");

    // Stack_int_pop(&s1);
    // Stack_int_pop(&s1);

    // printf("%d\n", Stack_int_peek(&s1));

    // printf("---------------------------------------------------------------\n");

    // int* array = Stack_int_to_array(&s1);

    // for (int i = 0; i < Stack_int_size(&s1); ++i)
    // {
    //     printf("%d ", array[i]);
    // }

    // printf("\n");

    // printf("---------------------------------------------------------------\n");

    // while (!(Stack_int_is_empty(&s1)))
    // {
    //     Stack_int_pop(&s1);
    // }

    // printf("%d\n", Stack_int_size(&s1));

    // printf("---------------------------------------------------------------\n");

    // free(array);

    Stack_int_destroy(&s1);

    return 0;
}

void Stack_int_create_empty(Stack_int* ptr)
{
    ptr->ptr_head_node = NULL;
    ptr->size = 0;
}

bool Stack_int_is_empty(Stack_int* ptr)
{
    return ptr->size == 0;
}

void Stack_int_push(Stack_int* ptr, int n)
{
    Stack_int_Node* ptr_new_node = malloc(sizeof (Stack_int_Node));

    if (ptr_new_node == NULL)
    {
        printf("\n-------------------------------------");
    	printf("\nStack_int_push()");
    	printf("\nOUT OF MEMORY, EXITING DUE TO FAILURE");
    	printf("\n-------------------------------------\n");

    	exit(EXIT_FAILURE);
    }

    ptr_new_node->value = n;

    if (ptr->size == 0)
    {
        ptr_new_node->ptr_next_node = NULL;
        ptr->ptr_head_node = ptr_new_node;
    }

    else
    {
        // ptr_new_node->ptr_next_node = NULL;
        ptr->ptr_head_node->ptr_next_node = ptr_new_node;
        ptr->ptr_head_node = ptr_new_node;
    }

    ++(ptr->size);
}

int Stack_int_peek(Stack_int* ptr)
{
    return ptr->ptr_head_node->value;
}

int Stack_int_size(Stack_int* ptr)
{
    return ptr->size;
}

void Stack_int_destroy(Stack_int* ptr)
{
    while (ptr->ptr_head_node != NULL)
    {
        Stack_int_Node* ptr_temp = ptr->ptr_head_node;
        ptr->ptr_head_node = ptr->ptr_head_node->ptr_next_node;
        free(ptr_temp);
    }
}