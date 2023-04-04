#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: receives head of a list as a parameter.
 *
 * Return: none.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_data;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp_data = current) != NULL)
		{
			current = current->next;
			free(temp_data);
		}
		*head = NULL;
	}
}
