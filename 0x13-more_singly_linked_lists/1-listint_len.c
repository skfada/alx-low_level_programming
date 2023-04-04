#include "lists.h"

/**
 * listint_len - returns number of elements in
 * a linked list.
 * @h: receives the head of a list.
 *
 * Return: number of node count.
 */
size_t listint_len(const listint_t *h)
{
	size_t ncount = 0;

	while (h != NULL)
	{
		h = h->next;
		ncount++;
	}
	return (ncount);
}
