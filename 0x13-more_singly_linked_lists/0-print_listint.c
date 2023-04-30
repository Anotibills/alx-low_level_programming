#include "lists.h"

/**
 * print_listint - function that prints elements of a list
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t ele = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
	ele++;
	h = h->next;
	}
	return (ele);
}
