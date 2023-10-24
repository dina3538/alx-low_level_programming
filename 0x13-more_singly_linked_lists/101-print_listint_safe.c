#include "lists.h"

/**
 * fun_free - free
 * @head: first elem
 */
void fun_free(listd_t **head)
{
	listd_t *f;
	listd_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((f = current) != NULL)
		{
			current = current->next;
			free(f);
		}
		*head = NULL;
	}
}

/**
 * print_listint_save - print
 * @head: first elem
 * Return: num of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listd_t *p, *nl, *add;

	p = NULL;
	while (head != NULL)
	{
		nl = malloc(sizeof(listd_t));
		if (nl = NULL)
			exit(98);
		nl->ptr = (void *)head;
		nl->next = p;
		p = nl;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->ptr)
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				fun_free(&p);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;

	}
	fun_free(&p);
	return (node);
}

