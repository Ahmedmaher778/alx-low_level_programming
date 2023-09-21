#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: field of node
 * Return: address of the new element, or NULL if it fails
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_h;
unsigned int length = 0;

while (str[length])
length++;

new_h = malloc(sizeof(list_t));
if (!new_h)
return (NULL);

new_h->str = strdup(str);
new_h->length = length;
new_h->next = (*head);
(*head) = new_h;

return (*head);
}

