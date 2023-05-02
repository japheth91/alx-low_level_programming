#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: a pointer to a pointer to the head of the list
 * @n: the integber to store in the new node
 *
 * Return: if memory allocation fails or head is NULL, returns NULL
 * otherwise returns a pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
