#include "main.h"
/**
 *_strpbrk - function that searches for a string for any set of bytes
 *@s: string
 *@accept: acceptable bytes
 *Return: pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
