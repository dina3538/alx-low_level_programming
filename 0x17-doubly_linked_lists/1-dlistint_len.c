#include "lists.h"

/**
 * dlistint_len - return number of elem
 * @h: addrss
 * Return: size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}
