#include "lists.h"

/**
 * *get_nodeint_at_index - nth node
 * @head: pointer
 * @index: the index
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l;

	for (l = 0; l < index; l++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
