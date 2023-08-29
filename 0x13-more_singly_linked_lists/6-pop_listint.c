#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to first element in linked list
 *
 * Return: The data inside elements that was deleted,
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
