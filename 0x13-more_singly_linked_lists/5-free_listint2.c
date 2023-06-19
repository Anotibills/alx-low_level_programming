#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: double pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	*head = NULL;
}
