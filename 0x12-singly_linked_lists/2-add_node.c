#include "lists.h"

/**
 * *add_node - add elem in the begg
 * @head: ponter to pointer
 * @str: pointee
 * Return: the addrs
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int l = 0;

	while (str[l])
		l++;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);

	add->str = strdup(str);
	add->len = l;
	add->next = *head;
	*head = add;


	return (add);
}
