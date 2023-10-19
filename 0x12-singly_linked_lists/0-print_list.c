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
		printf("[%d] %s\n", strlen(h->str), h->str ? h->str: "(nil)");
		h = h->next;
		j++;
	}
	return (j);
}


