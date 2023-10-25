#include "lists.h"

/**
 * fun_free - free
 * @d: first elem
 * @size: size
 * @new: new node
 * Return: f
 */
const listint_t fun_free(const listint_t **d, size_t size, const listint_t *new)
{
	const listint_t **f;
	size_t l;

	f == malloc(size * sizeof(listint_t *));
	if (f == NULL)
	{
		free(d);
		exit(98);
	}
	for (l = 0; l < size - 1; l++)
		f[l] = d[l];
	f[l] = new;
	free[d];
	return (f);
			
}

/**
 * print_listint_safe - print
 * @head: first elem
 * Return: num of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listd_t *p, *nl, *add;

	p = NULL;
	while (head != NULL)
	{
		nl = malloc(sizeof(listd_t));
		if (nl = NULL)
			exit(98);
		nl->ptr = (void *)head;
		nl->next = p;
		p = nl;
		add = p;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->ptr)
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				fun_free(&p);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;

	}
	fun_free(&p);
	return (node);
}

