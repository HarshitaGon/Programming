#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
	int value;

    // Node* ptr_previous_node;
    struct node* ptr_previous_node;

	// Node* ptr_next_node;
	struct node* ptr_next_node;
};

typedef struct node Node;

struct linked_list_int
{
    Node* ptr_head_node;
    Node* ptr_tail_node;
    int size;
};

typedef struct linked_list_int Linked_List_int;

void create_empty_Linked_List_int(Linked_List_int*);
void destroy_Linked_List_int(Linked_List_int*);
bool Linked_List_int_is_empty(Linked_List_int*);

int main(void)
{
	Linked_List_int a1;
	create_empty_Linked_List_int(&a1);

	printf("---------------------------------------------------------------\n");

    printf(Linked_List_int_is_empty(&a1) ? "true\n" : "false\n");

	printf("---------------------------------------------------------------\n");

	// Array_List_int_add(&a1, 10);
	// Array_List_int_add(&a1, 20);
	// Array_List_int_add(&a1, 30);

	// printf("%d\n", Array_List_int_get(&a1, 1));

	// printf("---------------------------------------------------------------\n");

	// printf(Array_List_int_is_empty(&a1) ? "true\n" : "false\n");

	// printf("%d\n", Array_List_int_size(&a1));

	// printf("---------------------------------------------------------------\n");

	// for (int i = 0; i < Array_List_int_size(&a1); ++i)
	// {
    // 	printf("%d ", Array_List_int_get(&a1, i));
	// }

	// printf("\n");

	// printf("---------------------------------------------------------------\n");

	// Array_List_int_set(&a1, 2, 40);

	// for (int i = 0; i < Array_List_int_size(&a1); ++i)
	// {
    // 	printf("%d ", Array_List_int_get(&a1, i));
	// }

	// printf("\n");

	// printf("---------------------------------------------------------------\n");

	// Array_List_int_add_at_index(&a1, 1, 50);

	// for (int i = 0; i < Array_List_int_size(&a1); ++i)
	// {
    // 	printf("%d ", Array_List_int_get(&a1, i));
	// }

	// printf("\n");

	// printf("---------------------------------------------------------------\n");

	// Array_List_int_clear(&a1);

	// printf("%d\n", Array_List_int_size(&a1));

	// printf("---------------------------------------------------------------\n");

	// Array_List_int_add(&a1, 10);
	// Array_List_int_add(&a1, 20);
	// Array_List_int_add(&a1, 30);
	// Array_List_int_add(&a1, 40);
	// Array_List_int_add(&a1, 10);
	// Array_List_int_add(&a1, 20);

	// for (int i = 0; i < Array_List_int_size(&a1); ++i)
	// {
    // 	printf("%d ", Array_List_int_get(&a1, i));
	// }

	// printf("\n");

	// printf(Array_List_int_contains(&a1, 30) ? "true\n" : "false\n");

	// printf(Array_List_int_contains(&a1, 50) ? "true\n" : "false\n");

	// printf("---------------------------------------------------------------\n");

	// for (int i = 0; i < Array_List_int_size(&a1); ++i)
	// {
    // 	printf("%d ", Array_List_int_get(&a1, i));
	// }

	// printf("\n");

	// printf("%d\n", Array_List_int_index_of(&a1, 10));

	// printf("%d\n", Array_List_int_index_of(&a1, 30));

	// printf("%d\n", Array_List_int_index_of(&a1, 50));

	// printf("---------------------------------------------------------------\n");

	// for (int i = 0; i < Array_List_int_size(&a1); ++i)
	// {
    // 	printf("%d ", Array_List_int_get(&a1, i));
	// }

	// printf("\n");

	// printf("%d\n", Array_List_int_last_index_of(&a1, 10));

	// printf("%d\n", Array_List_int_last_index_of(&a1, 30));

	// printf("%d\n", Array_List_int_last_index_of(&a1, 50));

	// printf("---------------------------------------------------------------\n");

	// Array_List_int_remove(&a1, 3);

	// for (int i = 0; i < Array_List_int_size(&a1); ++i)
	// {
    // 	printf("%d ", Array_List_int_get(&a1, i));
	// }

	// printf("\n");

	// printf("---------------------------------------------------------------\n");

	// Array_List_int_remove_range(&a1, 1, 3);

	// int* array = Array_List_int_to_array(&a1);

	// for (int i = 0; i < Array_List_int_size(&a1); ++i)
	// {
    // 	printf("%d ", array[i]);
	// }

	// printf("\n");

	// printf("---------------------------------------------------------------\n");

	// free(array);

	destroy_Linked_List_int(&a1);

	return 0;
}

void create_empty_Linked_List_int(Linked_List_int* ptr)
{
    ptr->ptr_head_node = NULL;
    ptr->ptr_tail_node = NULL;
    ptr->size = 0;
}

bool Linked_List_int_is_empty(Linked_List_int* ptr)
{
    return ptr->size == 0;
}

void destroy_Linked_List_int(Linked_List_int* ptr)
{
    while (ptr->ptr_head_node != NULL)
    {
        Node* ptr_temp = ptr->ptr_head_node;
        ptr->ptr_head_node = ptr->ptr_head_node->ptr_next_node;
        free(ptr_temp);
    }
}


