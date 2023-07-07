#include "main.h"
/**
 *_strcat - fn that concatenates two strings
 *@dest: destination of string
 *@src: source of string
 *Return: Destination
 */
char  *_strcat(char *dest, char *src)
{
	int ln = 0, i;

	while (dest[ln])
	{
		ln++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[ln] = src[i];
		ln++;
	}

	dest[ln] = '\0';
	return (dest);
}
