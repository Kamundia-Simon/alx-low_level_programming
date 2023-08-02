#include "lists.h"

/**
  *free_listint_safe - frees a list
  *@h: pointer to 1st node
  *Return: size of list freed
  */

size_t free_listint_safe(listint_t **h)
{
	size_t a = 0;
	listint_t *head, *tmp;
	long d;

	if (!h)
		return (0);
	head = *h;
	*h = NULL;
	while (head)
	{
		a++;
		d = head->next - head;
		tmp = head;
		free(tmp);
		if (d >= 0)
			break;
		head = head->next;
	}
	return (a);
}
