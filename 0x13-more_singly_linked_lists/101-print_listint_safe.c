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
	size_t l, node = 0;
	const listint_t **d = NULL;

	while (head != NULL)
	{
		for (l = 0; l < node; l++)
		{
			if (head == d[l])
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
	fun_free(d);
	return (node);
}

