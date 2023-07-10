#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *str_concat - concatenate two string
  *@s1: string 1
  *@s2: string 2
  *Return: NULL or pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, n, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[n++] = s1[i];
	for (i = 0; s2[i]; i++)
		str[n++] = s2[i];
	return (str);
}
