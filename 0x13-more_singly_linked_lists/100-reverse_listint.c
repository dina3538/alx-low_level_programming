#include "lists.h"

/**
 * reverse_listint - reve linked
 * @head: first node
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *f;
	listint_t *add;

	if (head == NULL || *head == NULL)
		return (NULL);
	f = *head;
	*head = f->next;
	f->next = NULL;

	while (*head != NULL)
	{
		add = (*head)->next;
		(*head)->next = f;
		f = *head;
		if (add == NULL)
			return (*head);
		*head = add;
	}
	if (*head == NULL)
	{
		*head = f;
		return (*head);
	}
	return (NULL);
}
