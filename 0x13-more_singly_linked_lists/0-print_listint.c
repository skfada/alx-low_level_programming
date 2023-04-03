#include "lists.h"

/**
 * print_listint - prints the list in a node structure.
 * @h: receives the head of the node as parameter.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
size_t nodes_count = 0;

if (h == NULL)
printf("the list is empty");

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nodes_count++;
}

return (nodes_count);

}
