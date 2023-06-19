#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer
 * @idx: the index of the list
 * @n: new node data
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *nnode;/**nnode represents the new node pointer*/
	unsigned int a;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL || head == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = NULL;
	if (idx == 0)
	{
		nnode->next = *head;
	*head = nnode;
	return (nnode);
	}
	for (a = 0; temp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			nnode->next = temp->next;
		temp->next = nnode;
		return (nnode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
