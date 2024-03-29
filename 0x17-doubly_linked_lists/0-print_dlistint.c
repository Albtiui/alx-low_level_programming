#include "lists.h"

/**
 * print_dlistint - prints doubly_linked list
 * @h: address of headnobe
 *
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
