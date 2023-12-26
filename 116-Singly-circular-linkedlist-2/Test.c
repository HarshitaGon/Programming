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
    int n;
    printf("Enter the number of integers (>= 1): ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);

    Node* ptr_head_node = malloc(sizeof (Node));
    scanf("%d", &(ptr_head_node->value));

    ptr_head_node->ptr_next_node = ptr_head_node;

    Node* ptr_previous_node = ptr_head_node;

    for (int i = 1; i < n; ++i)
    {
        Node* ptr_current_node = malloc(sizeof (Node));
        scanf("%d", &(ptr_current_node->value));

        ptr_previous_node->ptr_next_node = ptr_current_node;
        ptr_current_node->ptr_next_node = ptr_head_node;

        ptr_previous_node = ptr_current_node;
    }

    Node* ptr_current_node = ptr_head_node;

    while (true)
    {
        printf("%d ", ptr_current_node->value);
        ptr_current_node = ptr_current_node->ptr_next_node;

        if (ptr_current_node == ptr_head_node)
        {
            break;
        }
    }

	putchar('\n');

    ptr_current_node = ptr_head_node;

    while (true)
    {
        Node* ptr_temp = ptr_current_node;
        ptr_current_node = ptr_current_node->ptr_next_node;
        free(ptr_temp);

        if (ptr_current_node == ptr_head_node)
        {
            break;
        }
    }

	return 0;
}


