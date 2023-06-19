#include "lists.h"

/**
 * free_listint_safe - function that frees list with a loop
 * @h: double pointer
 * Return: the size of the list freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t a = 0;/**a represents the length and b the difference in the length*/
	int b;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		b = *h - (*h)->next;
		if (b > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			a++;
		}
		else
		{
			free(*h);
			*h = NULL;
		a++;
		break;
		}
	}
	*h = NULL;
	return (a);
}
