#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list.
 * @index: index of node to return.
 *
 * Return: pointer to the node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *nod = head;

	while (nod && l < index)
	{
		nod = nod->next;
		l++;
	}

	return (nod ? nod : NULL);
}

