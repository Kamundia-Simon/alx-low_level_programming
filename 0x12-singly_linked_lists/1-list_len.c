#include "lists.h"

/**
  *list_len - find number if elements list_t
  *@h: linked list
  *Return: number of elements in h
  */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
