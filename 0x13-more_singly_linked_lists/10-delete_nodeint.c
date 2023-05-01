#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * @head: double pointer
 * @index: index of the node to be deleted
 * Return: 1 if success, or -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *present = NULL;
	listint_t *temp = *head;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
	free(temp);
	return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
		present = temp->next;
	temp->next = present->next;
	free(present);
	return (1);
}
