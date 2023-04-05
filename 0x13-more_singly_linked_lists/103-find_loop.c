#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts,
 * or NULL if loop doesn't exist
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *k = head;
	listint_t *g = head;

	if (!head)
	return (NULL);

	while (k && g && g->next)
{
	g = g->next->next;
	k = k->next;
	if (g == k)
{
	k = head;
	while (k != g)
{
	k = k->next;
	g = g->next;
}
	return (g);
}
}

	return (NULL);
}
