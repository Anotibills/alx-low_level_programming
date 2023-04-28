#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: pointer
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	t = 0;
	while (h != NULL)
	{
		t++;
		h = h->next;
	}
	return (t);
}
