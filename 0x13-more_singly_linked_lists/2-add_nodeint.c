nclude "lists.h"

/**
 * add_nodeint - adds current node at the beginning
 * of a linked list
 * @head: receives head of a list as parameter.
 * @n: receives integer as a parameter.
 *
 * Return: address of current element, and NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));

	if (current == NULL)
		return (NULL);

	current->n = n;
	current->next = *head;
	*head = current;

	return (*head);
}
