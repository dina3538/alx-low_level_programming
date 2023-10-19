#include "lists.h"

/**
 * free_list - free
 * @head: pointer
*/

void free_list(list_t *head)
{
	list_t *f, *nf;

	if (!head)
		return;
	f = head;
	while (f)
	{
		nf = f->next;
		free(f->str);
		free(f);
		f = nf;
	}
}
