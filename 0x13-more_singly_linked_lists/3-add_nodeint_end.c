#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list.
 * @n: value for new node
 *
 * Return: pointer to the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nod;
	listint_t *nod = *head;

	new = malloc(sizeof(listint_t));
	if (!new_nod)
		return (NULL);

	new_nod->n = n;
	new_nod->next = NULL;

	if (*head == NULL)
	{
		*head = new_nod;
		return (new_nod);
	}

	while (nod->next)
		nod = nod->next;

	nod->next = new_nod;

	return (new_nod);
}

