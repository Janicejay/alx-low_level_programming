#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - prints listint_t list with a loop
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *S, *F;
	size_t nodeCount = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	S = head->next;
	F = (head->next)->next;

	while (F)
	{
		if (S == F)
		{
			S = head;
			while (S != F)
			{
				nodeCount++;
				S = S->next;
				F = F->next;
			}

			S = S->next;
			while (S != F)
			{
				nodeCount++;
				S = S->next;
			}

			return (nodeCount);
		}

		S = S->next;
		F = (F->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodeCount, index = 0;

	nodeCount = looped_listint_len(head);

	if (nodeCount == 0)
	{
		for (; head != NULL; nodeCount++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodeCount; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodeCount);
}
