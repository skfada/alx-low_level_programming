#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: receives head of a list as a parameter.
 *
 * Return: none.
 */
void free_listint(listint_t *head)
{
	listint_t *temp_data;

	while ((temp_data = head) != NULL)
	{
		head = head->next;
		free(temp_data);
	}
}
