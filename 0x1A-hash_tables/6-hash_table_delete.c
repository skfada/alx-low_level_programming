#include "hash_tables.h"

/**
 * @head: hash_node_t list to be freed
 * free_list - frees a linked list
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}

/**
 * @ht: hash table to be deleted
 * hash_table_delete - deletes a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count;

	if (!ht)
		return;

	for (count = 0; count < ht->size; count++)
		free_list(ht->array[count]);
	free(ht->array);
	free(ht);
}
