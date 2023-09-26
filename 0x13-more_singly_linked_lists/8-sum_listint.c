#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t linked list
 * @head: first node in the linked list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *all = head;

	while (all)
	{
		sum += all->n;
		all = all->next;
	}

	return (sum);
}
