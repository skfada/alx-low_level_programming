#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: receives head of a list as parameter.
 *
 * Return: none.
 */
void free_listp2(listp_t **head)
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
 * free_listint_safe - frees a linked list.
 * @h: receives head of a list as parameter.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_counts = 0;
	listp_t *hnode_ptr, *new_node, *add_node;
	listint_t *curr_node;

	hnode_ptr = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = hnode_ptr;
		hnode_ptr = new_node;

		add_node = hnode_ptr;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (*h == add_node->p)
			{
				*h = NULL;
				free_listp2(&hnode_ptr);
				return (node_counts);
			}
		}

		curr_node = *h;
		*h = (*h)->next;
		free(curr_node);
		node_counts++;
	}

	*h = NULL;
	free_listp2(&hnode_ptr);
	return (node_counts);
}
