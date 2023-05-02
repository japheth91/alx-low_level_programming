#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: A pointer to a pointer to the  head of the list
 * @n: The integer to store in the new node
 *
 * Return: if memory allocation fails or head is NULL, returns NULL
 * otherwise, returns a pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
