#include "lists.h"

/**
 * listint_len - function that returns number of elements
 * @h: pointer
 * Return: number of element (ele)
 */
size_t listint_len(const listint_t *h)
{
	size_t ele = 0;

	while (h != NULL)
	{
		ele++;
		h = h->next;
	}
	return (ele);
}
