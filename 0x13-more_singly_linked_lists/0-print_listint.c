#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodeCount++;
		h = h->next;
	}

	return (nodeCount);
}
