#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free
 * @head: pointer
*/
void free_listint(listint_t *head)
{
	listint_t *f;

	while ((f = head) != NULL)
	{
		head = head->next;
		free(f);
	}
}
