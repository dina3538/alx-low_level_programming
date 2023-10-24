#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: first node
 * @index: index
 * Return: 1 if sucess -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int l;
	listint_t *f;
	listint_t *node;

	f = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (l = 0; l < index - 1 && f != NULL && index != 0; l++)
		f = f->next;
	if (f == NULL)
		return (-1);
	if (index == 0)
	{
		node = f->next;
		free(f);
		*head = node;
	}
	else
	{
		if (f->next == NULL)
			node = f->next;
		else
			node = f->next->next;
		free(f->next);
		f->next = node;
	}
	return (-1);
}
