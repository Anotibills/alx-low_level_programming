#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer
 * @index: the index of the node, starting at 0
 * Return: NULL, if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int n = 0;

	while (temp != NULL && n < index)
	{
		temp = temp->next;
	n++;
	}
	return (temp ? temp : NULL);
}
