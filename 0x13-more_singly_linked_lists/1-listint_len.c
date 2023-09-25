#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		nodeCount++;
		h = h->next;
	}

	return (nodeCount);
}
