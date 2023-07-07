#include "hash_tables.h"

/**
 * @h: pointer to the hash_node_t list to print
 * print_list - prints all the elements of a linked list
 */
void print_list(hash_node_t *h)
{
	while (h)
	{
		printf("'%s': '%s'", h->key, h->value);
		if (h->next)
			printf(", ");
		h = h->next;
	}
}

/**
 * @ht: hash table to print
 * hash_table_print - prints a hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	char *last_key = NULL;
	unsigned long int index;
	unsigned long int count;
	hash_node_t *node = NULL;

	if (!ht)
		return;

	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[i] != NULL)
			node = ht->array[count];
	}

	printf("{");

	if (node)
	{
		last_key = node->key;
		index = key_index((const unsigned char *)last_key, ht->size);
		for (count = 0; count < ht->size; count++)
		{
			print_list(ht->array[count]);
			if (ht->array[count] && count < index)
				printf(", ");
		}
	}

	printf("}\n");
}
