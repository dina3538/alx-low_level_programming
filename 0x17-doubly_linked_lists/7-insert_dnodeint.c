#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: head
 * @idx: index of the new node
 * @n: valua
 * Return: the address of the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *add;
	dlistint_t *head;
	unsigned int k;

	add = NULL;
	if (idx == 0)
		add = add_dnodeint(h, n);
	else
	{
		head = *h;
		k = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					add = add_dnodeint_end(h, n);
				else
				{
					add = malloc(sizeof(dlistint_t));
					if (add != NULL)
					{
						add->n = n;
						add->next = head->next;
						add->prev = head;
						head->next->prev = add;
						head->next = add;
					}
				}
				break;
			}
			head = head->next;
			k++;
		}
	}

	return (add);
}
