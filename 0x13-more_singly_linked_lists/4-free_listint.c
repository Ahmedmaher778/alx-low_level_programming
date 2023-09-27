#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to first node
*/

void free_listint(listint_t *head)
{
	listint_t *nod;

	while (head)
	{
		nod = head->next;
		free(head);
		head = nod;
	}
}

