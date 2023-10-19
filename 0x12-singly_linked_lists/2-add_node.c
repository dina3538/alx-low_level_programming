#include "lists.h"

/**
 * *add_node - add elem in the begg
 * @head: ponter to pointer
 * @str: pointee
 * Return: the addrs
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	unsigned int len = 0;

	while (str[len])
		len++;

	add = malloc(sizeof(list_t));
	if (!add || !head)
		return (NULL);

	add->str = strdup(str);
	add->len = len;
	add->next = (*head);
	*head = add;


	return (*add);
}
