#include "lists.h"

/**
 * sum_listint - sum of all elem
 * @head: pointer
 * Return: sum
*/

int sum_listint(listint_t *head)
{
	unsigned int s = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
