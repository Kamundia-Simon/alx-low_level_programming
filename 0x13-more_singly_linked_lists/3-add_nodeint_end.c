#include <stdlib.h>
#include "lists.h"

/**
  *add_nodeint_end - Adds a new node at the end of list
  *@head: pointer to head of list
  *@n: vallue to be assigned to new node
  *Return: address of new element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *new = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}
