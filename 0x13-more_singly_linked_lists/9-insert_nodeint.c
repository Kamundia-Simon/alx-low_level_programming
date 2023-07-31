#include "lists.h"

/**
  *insert_nodeint_at_index - inserts a new node at a given point
  *@head: pointer to pointer of head
  *@idx: index of list
  *@n: value aassigned to new node
  *Return: address of new node/NULL
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp != NULL)
	{
		if (count == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
