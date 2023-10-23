#include "lists.h"
/**
 * add_nodeint_end - add new nod in the end
 * @head: pounree
 * @n: pointer
 * Return: addr or null
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *curr;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);
	add->n = n;
	add->next = NULL;
	curr = *head;
	if (curr == NULL)
	{
		*head = add;
	}
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = add;
	}
	return (*head);
}
