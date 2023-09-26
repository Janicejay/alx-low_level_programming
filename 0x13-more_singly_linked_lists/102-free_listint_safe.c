#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *all;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			all = (*h)->next;
			free(*h);
			*h = all;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
