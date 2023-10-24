#include "lists.h"

listint_t *new_node(int n);
/**
 * new_node - add node
 * @n: ponter
 * Return: add
 */

listint_t *new_node(int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	return (add);
}

/**
 * insert_nodeint_at_index - inse node
 * @head: pointer
 * @idx: index
 * @n: elem
 * Return: add
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int l;
	listint_t *f;
	listint_t *old;
	listint_t *add;

	f = *head;
	if (head == NULL)
		return (NULL);
	add = new_node(n);
	if (add == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	if (idx == 0)
	{
		*head = add;
	}
	for (l = 0; l < idx && f != NULL && idx != 0; l++)
		f = f->next;
	if (f == NULL)
		return (NULL);
	if (idx == 0)
		add->next = f;
	else
	{
		old = f->next;
		f->next = old;
		add->next = old;
	}
	return (add);
}

