#include "lists.h"

/**
 * add_dnodeint_end - add node in the end
 * @head: the head
 * @n: size
 * Return: addrss
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *k;
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = NULL;

	k = *head;

	if (k != NULL)
	{
		while (k->next != NULL)
			k = k->next;
		k->next = add;
	}
	else
	{
		*head = add;
	}

	add->prev = k;

	return (add);
}
