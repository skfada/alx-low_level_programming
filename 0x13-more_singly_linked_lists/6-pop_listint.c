#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: receives head of a list as a parameter.
 *
 * Return: data in the head nodes.
 */
int pop_listint(listint_t **head)
{
	int h_data;
	listint_t *head_node;
	listint_t *curr_node;

	if (*head == NULL)
		return (0);

	curr_node = *head;

	h_data = curr_node->n;

	head_node = curr_node->next;

	free(curr_node);

	*head = head_node;

	return (h_data);
}
