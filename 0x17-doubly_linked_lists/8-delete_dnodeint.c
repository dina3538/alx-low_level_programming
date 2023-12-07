#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * @head: head
 * @index: index
 * Return: 1 if it success -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *d1;
	dlistint_t *d2;
	unsigned int k;

	d1 = *head;

	if (d1 != NULL)
		while (d1->prev != NULL)
			d1 = d1->prev;

	k = 0;

	while (d1 != NULL)
	{
		if (k == index)
		{
			if (k == 0)
			{
				*head = d1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				d2->next = d1->next;

				if (d1->next != NULL)
					d1->next->prev = d2;
			}

			free(d1);
			return (1);
		}
		d2 = d1;
		d1 = d1->next;
		k++;
	}

	return (-1);
}
