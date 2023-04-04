#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: receives head of a list as parameter.
 *
 * Return: none.
 */
void free_listp(listp_t **head)
{
	listp_t *temp_node;
	listp_t *curr_node;

	if (head != NULL)
	{
		curr_node = *head;
		while ((temp_node = curr_node) != NULL)
		{
			curr_node = curr_node->next;
			free(temp_node);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: receives head of a list as parameter.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_counts = 0;
	listp_t *head_ptr, *new_node, *add_node;

	head_ptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = head_ptr;
		head_ptr = new_node;

		add_node = head_ptr;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (head == add_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&head_ptr);
				return (node_counts);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_counts++;
	}

	free_listp(&head_ptr);
	return (node_counts);
}
