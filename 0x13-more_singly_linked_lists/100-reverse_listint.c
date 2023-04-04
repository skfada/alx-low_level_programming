#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: receives head of a list as parameter.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr_node;
	listint_t *new_node;

	ptr_node = NULL;
	new_node = NULL;

	while (*head != NULL)
	{
		new_node = (*head)->next;
		(*head)->next = ptr_node;
		ptr_node = *head;
		*head = new_node;
	}

	*head = ptr_node;
	return (*head);
}
