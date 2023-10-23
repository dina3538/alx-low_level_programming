#include "lists.h"
/**
 * *add_nodeint - add elem in the begg
 * @head: ponter to pointer
 * @n: pointee
 * Return: the addrs
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
