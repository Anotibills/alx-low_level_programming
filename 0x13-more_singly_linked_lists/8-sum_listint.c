#include "lists.h"

/**
 * sum_listint - it returns the sum of all data (n) of a linked list
 * @head: pointer
 * Return: sum. if list is empty, return 0 instead
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int add = 0;

	while (temp != 0)
	{
		add += temp->n;
	temp = temp->next;
	}
	return (add);
}
