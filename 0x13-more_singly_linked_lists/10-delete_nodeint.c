#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: address of pointer to the first node
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nod = *head;
	listint_t *curr = NULL;
	unsigned int l = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(nod);
		return (1);
	}

	while (l < index - 1)
	{
		if (!nod || !(nod->next))
			return (-1);
		nod = nod->next;
		l++;
	}


	curr = nod->next;
	nod->next = curr->next;
	free(curr);

	return (1);
}

