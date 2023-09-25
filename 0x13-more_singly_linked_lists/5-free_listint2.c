#include "lists.h"

/**
 * free_listint2 - frees the listint_t list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *all;

	if (head == NULL)
		return;

	while (*head)
	{
		all = (*head)->next;
		free(*head);
		*head = all;
	}

	*head = NULL;
}
