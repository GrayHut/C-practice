#include <stdio.h>
#include <stdlib.h>
/**
 * This program implements linked lists operations such as;
 * insertion, deletion and printing of the list contents.
*/

typedef struct node
{
    int data;
    struct node *next;
} node_1;

size_t print_list(const node_1 *head)
{
    size_t i;
    const node_1 *current = head;

    for (i = 0; current != NULL; i++)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    return i;
}

node_1 *addNodeEnd(node_1 **head, const int data)
{
    node_1 *newNode = malloc(sizeof(node_1));

    if (head == NULL)
    {
        return (NULL);
    }

    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        node_1 *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    return newNode;
}

int main()
{
    node_1 *head;

    head = NULL;
    
    addNodeEnd(&head, 8);
    addNodeEnd(&head, 9);
    print_list(head);

    return 0;
}