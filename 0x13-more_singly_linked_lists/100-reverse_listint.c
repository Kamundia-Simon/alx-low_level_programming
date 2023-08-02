#include "lists.h"

/**
  *reverse_listint - reverses a list
  *@head: double pointer to head
  *Return: a pointer to the first node
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	(*head)->next = prev;

	return (*head);
}
