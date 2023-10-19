#include "lists.h"

/**
 * add_node_end - add new nod in the end
 * @head: pounree
 * @str: pointer
 * Return: addr or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *curr;
	size_t m;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);

	add->str = strdup(str);
	for (m = 0; str[m]; m++)
		;

	add->len = m;
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
