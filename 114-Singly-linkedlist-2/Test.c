#include <stdio.h>
#include <stdlib.h>

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

    ptr_head_node->ptr_next_node = NULL;

    Node* ptr_previous_node = ptr_head_node;

    for (int i = 1; i < n; ++i)
    {
        Node* ptr_current_node = malloc(sizeof (Node));
        scanf("%d", &(ptr_current_node->value));

        ptr_previous_node->ptr_next_node = ptr_current_node;
        ptr_current_node->ptr_next_node = NULL;

        ptr_previous_node = ptr_current_node;
    }

    Node* ptr_current_node = ptr_head_node;

    while (ptr_current_node != NULL)
    {
        printf("%d ", ptr_current_node->value);
        ptr_current_node = ptr_current_node->ptr_next_node;
    }

    putchar('\n');

    ptr_current_node = ptr_head_node;

    while (ptr_current_node != NULL)
    {
        Node* ptr_temp = ptr_current_node;
        ptr_current_node = ptr_current_node->ptr_next_node;
        free(ptr_temp);
    }

	return 0;
}


