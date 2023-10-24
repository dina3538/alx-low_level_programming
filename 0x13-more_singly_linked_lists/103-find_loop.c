#include "lists.h"

/**
 * *find_listint_loop - find loop
 * @head: first elem
 * Return: addr
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *prev;

	p = head;
	prev = head;

	while (head && p && p->next)
	{
		head = head->next;
		p = p->next->next;

		if (head == p)
		{
			head = prev;
			prev = p;
			while (1)
			{
				p = prev;
				while (p->next = head)
					break;
				head = head->next;
			}
			return (p->next);
		}
	}
	return (NULL);


