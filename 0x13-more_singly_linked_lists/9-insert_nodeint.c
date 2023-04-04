#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: receives head of a list as parameter.
 * @idx: receive integer for index of the list where the new node is
 * added as a parameter.
 * @n: receives integer parameter for the element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new_node;
	listint_t *head_node;

	head_node = *head;

	if (idx != 0)
	{
		for (count = 0; count < idx - 1 && head_node != NULL; count++)
		{
			head_node = head_node->next;
		}
	}

	if (head_node == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = head_node->next;
		head_node->next = new_node;
	}

	return (new_node);
}
