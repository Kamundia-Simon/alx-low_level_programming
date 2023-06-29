#include "main.h"
/**
 * _strncpy -fn to copy a string
 * @dest:destination
 * @src: source
 * @n: copy limit
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (src[y])
	{
		y++;
	}

	while (x < n && src[x])
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
