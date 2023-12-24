#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int value;

    // Node* ptr_next_node;
    struct node* ptr_next_node;
};

typedef struct node Node;

int main(void)
{
    Node* ptr_first_node = malloc(sizeof (Node));
	ptr_first_node->value = 10;

    Node* ptr_second_node = malloc(sizeof (Node));
	ptr_second_node->value = 20;

    Node* ptr_third_node = malloc(sizeof (Node));
	ptr_third_node->value = 30;

    Node* ptr_fourth_node = malloc(sizeof (Node));
	ptr_fourth_node->value = 40;

    Node* ptr_fifth_node = malloc(sizeof (Node));
	ptr_fifth_node->value = 50;

	ptr_first_node->ptr_next_node = ptr_second_node;
	ptr_second_node->ptr_next_node = ptr_third_node;
	ptr_third_node->ptr_next_node = ptr_fourth_node;
	ptr_fourth_node->ptr_next_node = ptr_fifth_node;
	ptr_fifth_node->ptr_next_node = ptr_first_node;

    // printf("%d ", ptr_first_node->value);

	// Node* ptr_current_node = ptr_first_node->ptr_next_node;

    // while (ptr_current_node != ptr_first_node)
    // {
   	//  printf("%d ", ptr_current_node->value);
   	//  ptr_current_node = ptr_current_node->ptr_next_node;
	// }

    Node* ptr_current_node = ptr_first_node;

      while (true)
    {
        printf("%d ", ptr_current_node->value);
        ptr_current_node = ptr_current_node->ptr_next_node;

        if (ptr_current_node == ptr_first_node)
        {
            break;
        }
    }

	putchar('\n');

    free(ptr_first_node);
    free(ptr_second_node);
    free(ptr_third_node);
    free(ptr_fourth_node);
    free(ptr_fifth_node);

    return 0;
}





