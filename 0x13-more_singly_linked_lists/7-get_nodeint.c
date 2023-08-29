#include "lists.h"

/**
 * get_nodeint_at_index - Prints the node at a certain index in a linked list
 * @head: First node in the linked list
 * @index: Index of node to print
 *
 * Return: Pointer to node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}
