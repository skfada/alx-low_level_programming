#include "lists.h"

/**
 * add_nodeint_end - adds a new_data node at the end
 * of a linked list
 * @head: receives head of a list as parameter.
 * @n: receives integer value of n element.
 *
 * Return: address of the new_data element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_data;
	listint_t *temp_data;

	(void)temp_data;

	new_data = malloc(sizeof(listint_t));

	if (new_data == NULL)
		return (NULL);

	new_data->n = n;
	new_data->next = NULL;
	temp_data = *head;
	if (*head == NULL)
	{
		*head = new_data;
	}
	else
	{
		while (temp_data->next != NULL)
		{
			temp_data = temp_data->next;
		}
		temp_data->next = new_data;
	}

	return (*head);
}
