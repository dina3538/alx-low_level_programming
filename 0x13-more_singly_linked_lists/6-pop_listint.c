#include "lists.h"

/**
 * pop_listint - del head node
 * @head: pointer
 * Return: 0 or n
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *f;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	f = *head;
	*head = (*head)->next;
	free(f);

	return (n);
}
