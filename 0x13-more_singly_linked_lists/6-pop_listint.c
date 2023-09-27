#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to first element in the linked list.
 *
 * Return: value of the popped node
*/

int pop_listint(listint_t **head)
{
	listint_t *nod;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	nod = (*head)->next;
	free(*head);
	*head = nod;

	return (number);
}

