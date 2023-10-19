#include "lists.h"

/**
 * list_len - functoin ret num of elem
 * @h: pointer
 * Return: num of elem
*/

size_t list_len(const list_t *h)
{
	size_t q = 0;

	while (h != NULL)
	{
		q++;
		h = h->next;
	}
	return (q);
}
