#include "lists.h"

/**
 * add_dnodeint - add node
 * @head: the head
 * @n: size
 * Return: the addrss
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add = malloc(sizeof(dlistint_t));

	if (!head || !add)
		return (add ? free(add), NULL : NULL);

	add->n = n;
	add->prev = NULL;
	if (!*head)
	{
		*head = add;
		add->next = NULL;
	}
	else
	{
		add->next = *head;
		(*head)->prev = add;
		*head = add;
	}
	return (add);
}
