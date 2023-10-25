#include "lists.h"
/**
 * fun_l - fun
 * @head: firs el
 *
 * Return: addr
 */

listint_t *fun_l(listint_t *head)
{
	listint_t *p, *en;

	if (head == NULL)
		return (NULL);
	for (en = head->next; en != NULL; en = en->next)
	{
		if (en == en->next)
			return (en);
		for (p = head; p != en; p = p->next)
			if (p == en->next)
				return (en->next);
	}
	return (NULL);
}


/**
 * free_listint_safe - free
 * @h: pointer
 * Return: size
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *lo;
	size_t length;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);
	lo = fun_l(*h);
	for (length = 0; (*h != lo || loop ) && *h != NULL; *h = next)
	{
		length++;
		next = (*h)->next;
		if (*h == lo && loop)
		{
			if (lo == lo->next)
			{
				free(*h);
				break;
			}
			length++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (length);
}


