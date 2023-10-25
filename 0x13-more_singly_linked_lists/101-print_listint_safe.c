#include "lists.h"

/**
 * fun_free - free
 * @dl: first elem
 * @size: size
 * @new: new node
 * Return: f
 */
const listint_t **fun_free(const listint_t **dl,
		size_t size, const listint_t *new)
{
	const listint_t **f;
	size_t l;

	f = malloc(size * sizeof(listint_t *));
	if (f == NULL)
	{
		free(dl);
		exit(98);
	}
	for (l = 0; l < size - 1; l++)
		f[l] = dl[l];
	f[l] = new;
	free(dl);
	return (f);

}

/**
 * print_listint_safe - print
 * @head: first elem
 * Return: num of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t ll, node = 0;
	const listint_t **d = NULL;

	while (head != NULL)
	{
		for (ll = 0; ll < node; ll++)
		{
			if (head == d[ll])
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free(d);
				return (node);
			}
		}
		node++;
		d = fun_free(d, node, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;

	}
	free(d);
	return (node);
}

