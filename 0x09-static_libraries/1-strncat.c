#include "main.h"
/**
 *_strncat - fn to concatenate two strings
 *@dest: the destination
 *@src: source value
 *@n: limit of bytes
 *Return: destination value
 */
char *_strncat(char *dest, char *src, int n)
{
	int ln = 0, i = 0;

	while (dest[ln])
	{
		ln++;
	}
	while (i < n && src[i])
	{
		dest[ln] = src[i];
		ln++;
		i++;
	}
	dest[ln + n + 1] = '\0';
	return (dest);
}
