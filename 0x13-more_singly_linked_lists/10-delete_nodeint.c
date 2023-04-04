#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: receives head of a list as a parameter.
 * @index: receives index of the list where the node is
 * deleted as a parameter.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *prev_node;
	listint_t *next_node;

	prev_node = *head;

	if (index != 0)
	{
		for (count = 0; count < index - 1 && prev_node != NULL; count++)
		{
			prev_node = prev_node->next;
		}
	}

	if (prev_node == NULL || (prev_node->next == NULL && index != 0))
	{
		return (-1);
	}

	next_node = prev_node->next;

	if (index != 0)
	{
		prev_node->next = next_node->next;
		free(next_node);
	}
	else
	{
		free(prev_node);
		*head = next_node;
	}

	return (1);
}
