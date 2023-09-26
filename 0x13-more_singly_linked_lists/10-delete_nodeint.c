#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *all = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(all);
		return (1);
	}

	while (i < index - 1)
	{
		if (!all || !(all->next))
			return (-1);
		all = all->next;
		i++;
	}


	current = all->next;
	all->next = current->next;
	free(current);

	return (1);
}
