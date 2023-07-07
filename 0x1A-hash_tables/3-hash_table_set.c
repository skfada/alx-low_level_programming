#include "hash_tables.h"

/**
 * @key: new key to add in the node
 * replace_value - replaces the value at a pre-existing key
 * @value: value to add in the node
 * @ht: double pointer to the hash_node_t list
 */
void replace_value(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(value);
}

/**
 * @key: key to look for
 * check_key - checks if a key exists in a hash table
 * Return: 1 if the key is found, 0 otherwise
 * @ht: pointer to the hash_node_t list
 */
int check_key(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
		ht = ht->next;
	}

	return (0);
}

/**
 * @value: value to add in the node
 * @key: new key to add in the node
 * Return: the address of the new element, or NULL if it fails
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the hash_node_t list
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (*head == NULL)
	{
		(*head) = new_node;
		new_node->next = NULL;
	} else
	{
		new_node->next = (*head);
		(*head) = new_node;
	}

	return (*head);
}

/**
 * @value: value of the element to store in the array *
 * Return: 1 on success, 0 otherwise
 * @key: key of the element, will give the index in the array
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add the element to
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (check_key(ht->array[index], key))
	{
		replace_value(&ht->array[index], key, value);
		return (1);
	}
	add_node(&ht->array[index], key, value);
	if (&ht->array[index] == NULL)
		return (0);
	return (1);
}
