#include <stdlib.h>
#include "lists.h"

/**
  *pop_listint - deletes the head
  *@head: pointer to head
  *Return: (n) of deleted head node
  */

int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *tmp = *head;

	if (head == NULL || *head == NULL)
		return (x);
	x = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (x);
}
