#include "lists.h"

/**
  *free_listint_safe - frees a list
  *@h: pointer to 1st node
  *Return: size of list freed
  */

size_t free_listint_safe(listint_t **h)
{
	unsigned int node = 0;
	listint_t *tmp = *h, *temp;

	if (tmp == 0 || h == 0)
		return (0);
	tmp = *h;
	while (tmp != 0)
	{
		temp = tmp;
		tmp = tmp->next;
		node++;

		free(temp);
		if (temp <= tmp)
			break;
	}
	*h = 0;
	return (node);
}
