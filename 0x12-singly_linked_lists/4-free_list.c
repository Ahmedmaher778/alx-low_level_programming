#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to head node.
*/

void free_list(list_t *head)
{
list_t *nod;

while (head)
{
nod = head->next;
free(head->str);
free(head);
head = nod;
}
}

