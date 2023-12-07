#include "lists.h"

/**
 * print_dlistint - print all element
 * @h: address
 * Return: the size
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
