#include "lists.h"

/**
 * looped_listint_len - counts length of looped linked list elements
 * @head: pointer
 * Return: Always 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *a, *b;
	size_t ele = 1;/**where ele represents node elements*/
	
	if (!head || head->next == NULL)
		return (0);
	a = head->next;
	b = (head->next)->next;
	while (a != NULL)
	{
		if (a == b)
		{
			a = b;
			while (a != b)
			{
				ele++;
				a = a->next;
				b = b->next;
			}
			a = a->next;
			while (a != b)
			{
				ele++;
				a = b->next;
			}
			return (ele);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints a linked list with a loop
 * @head: pointer
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ele, index = 0;
	ele = looped_listint_len(head);

	if (ele == 0)
	{
		for (; head; ele++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < ele; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
			printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (ele);
}
