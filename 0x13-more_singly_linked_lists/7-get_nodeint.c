#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: receives head of a list as a parameter.
 * @index: receives integer parameter as index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx;

	for (idx = 0; idx < index && head != NULL; idx++)
	{
		head = head->next;
	}

	return (head);
}
