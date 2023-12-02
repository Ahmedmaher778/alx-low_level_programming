#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp_node;
	unsigned long int l;

	for (l = 0; l < ht->size; l++)
	{
		if (ht->array[l] != NULL)
		{
			node = ht->array[l];
			while (node != NULL)
			{
				tmp_node = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp_node;
			}
		}
	}
	free(head->array);
	free(head);
}
