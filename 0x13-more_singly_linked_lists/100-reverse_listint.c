#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * Return: a pointer to the node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
	(*head)->next = back;
	back = *head;
	*head = next;
	}
		*head = back;
	return (*head);
}
