#include "hash_tables.h"

/**
 * @key: key of the value to retrieve
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 * @ht: hash table to look into
 * hash_table_get - retrieves a value associated with a key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long int index;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];

	while (node)
	{
		if (!strcmp(node->key, (char *)key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
