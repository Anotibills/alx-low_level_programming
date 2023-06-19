#include "lists.h"

/**
 * add_nodeint_end - funtion that adds new node at the end of a list
 * @head: double pointer
 * @n: number of nodes
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ele;
	listint_t *temp = *head;

	ele = malloc(sizeof(listint_t));
	if (ele == NULL)
		return (NULL);
	ele->n = n;
	ele->next = NULL;
	if (*head == NULL)
	{
		*head = ele;
	return (ele);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = ele;
	return (ele);
}
