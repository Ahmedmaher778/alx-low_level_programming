#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list.
 * @idx: index where the new node is added.
 * @n: value of the new node
 *
 * Return: address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int l;
	listint_t *new_nod;
	listint_t *nod = *head;

	new_nod = malloc(sizeof(listint_t));
	if (!new_nod || !head)
		return (NULL);

	new_nod->n = n;
	new_nod->next = NULL;

	if (idx == 0)
	{
		new_nod->next = *head;
		*head = new_nod;
		return (new_nod);
	}

	for (l = 0; nod && l < idx; l++)
	{
		if (l == idx - 1)
		{
			new_nod->next = nod->next;
			nod->next = new_nod;
			return (new_nod);
		}
		else
			nod = nod->next;
	}

	return (NULL);
}

