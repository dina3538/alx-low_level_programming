#include "lists.h"
#include<stdlib.h>

/**
 * *find_listint_loop - find loop
 * @head: first elem
 * Return: addr
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pr;
	listint_t *prev;

	if (head == NULL)
		return (NULL);
	for (prev = head->next; prev != NULL; prev = prev->next)
	{
		if (prev == prev->next)
			return (prev);
		for (pr = head; pr != prev; pr = pr->next)
			if (pr == prev->next)
				return (prev->next);
	}
	return (NULL);
}

