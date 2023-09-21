#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list.
 * @str: field of node
 * Return: address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_h;
list_t *nod = *head;
unsigned int len = 0;

while (str[len])
len++;

new_h = malloc(sizeof(list_t));
if (!new_h)
return (NULL);

new_h->str = strdup(str);
new_h->len = len;
new_h->next = NULL;

if (*head == NULL)
{
*head = new_h;
return (new_h);
}

while (nod->next)
nod = nod->next;

nod->next = new_h;

return (new_h);
}

