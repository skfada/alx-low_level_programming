#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: parameter as head of a list.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nudes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nudes++;
	}
	return (num_nudes);
}
