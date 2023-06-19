#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ele;

	if (head == NULL || *head == NULL)
		return (0);
	ele = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (ele);
}
