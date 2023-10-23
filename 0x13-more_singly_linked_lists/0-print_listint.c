#include "lists.h"

/**
 * print_listint - function that print a linked list
 * @h: ponter
 * Return: num of node
 */

size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
