#include "hash_tables.h"

/**
 * hash_table_set - Add an item to Hash table.
 * @ht: A pointer to the hash table.
 * @key: key of the added item to the hash table.
 * @value: pair value of the key.
 * Return: Upon failure - 0.
 *         else - 1.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int inde, l;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (l = index; ht->array[l]; l++)
	{
		if (strcmp(ht->array[l]->key, key) == 0)
		{
			free(ht->array[l]->value);
			ht->array[l]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
