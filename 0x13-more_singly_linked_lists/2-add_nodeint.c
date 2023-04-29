#include "lists.h"

/**
 * add_nodeint - function add a new node
 * @head: pointer to a pointer
 * @n: number of nodes
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ele;

	ele = malloc(sizeof(listint_t));
	if (ele == NULL)
		return (NULL);
	ele->n = n;
	ele->next = *head;
	*head = ele;
	return (ele);
}
