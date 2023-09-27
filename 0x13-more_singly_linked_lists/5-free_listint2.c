#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: address of pointer to the first node
*/

void free_listint2(listint_t **head)
{
	listint_t *nod;

	if (head == NULL)
		return;

	while (*head)
	{
		nod = (*head)->next;
		free(*head);
		*head = nod;
	}

	*head = NULL;
}

