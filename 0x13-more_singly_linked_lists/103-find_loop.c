#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: receives head of a list as a parameter.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node_ptr;
	listint_t *prev_node;

	node_ptr = head;
	prev_node = head;
	while (head && node_ptr && node_ptr->next)
	{
		head = head->next;
		node_ptr = node_ptr->next->next;

		if (head == node_ptr)
		{
			head = prev_node;
			prev_node =  node_ptr;
			while (1)
			{
				node_ptr = prev_node;
				while (node_ptr->next != head && node_ptr->next != prev_node)
				{
					node_ptr = node_ptr->next;
				}
				if (node_ptr->next == head)
					break;

				head = head->next;
			}
			return (node_ptr->next);
		}
	}

	return (NULL);
}
