#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index,
 * i.e. nth node in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return,starting at 0
 *
 * Return: nth node of the linked list,
 * if node doesn't exist, returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
{
	temp = temp->next;
	i++;
}

	return (temp ? temp : NULL);
}
