#include "lists.h"

/**
 * print_list - function that print a linked list
 * @h: ponter
 * Return: num of node
*/

size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		j++;
	}
	return (j);
}


