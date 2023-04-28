#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all element of a list
 * @h: the pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	t = 0;
	while (h != NULL)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		t++;
	}
	return (t);
}

