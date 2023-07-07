#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: string to search
 *@c:character in search
 *Return: a pointer to the first occurrence c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
