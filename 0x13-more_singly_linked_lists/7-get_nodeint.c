#include "lists.h"

/**
  *get_nodeint_at_index - returns nth node of the list
  *@head: pointer to head
  *@index: index of node
  *Return: pointer to nth node/NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
