#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *delete_nodeint_at_index - deletes node at index
  *@head: double pointer to head
  *@index: index of node to delete
  *Return: 1 or -1
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 listint_t *new = *head;
	 listint_t *last = NULL;
	 unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	while (last != NULL)
	{
		if (count == index)
		{
			if (last == NULL)
			{
				*head = new->next;
			}
			else
			{
				last->next = new->next;
			}
			free(new);
			return (1);
		}
		last = new;
		new = new->next;
		count++;
	}
	return (-1);
}
