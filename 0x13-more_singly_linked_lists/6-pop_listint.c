#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head node's data
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *all;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	all = (*head)->next;
	free(*head);
	*head = all;

	return (num);
}
