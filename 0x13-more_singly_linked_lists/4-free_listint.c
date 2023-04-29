#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head->next;
	free(head);
	head = temp;
	}
}
