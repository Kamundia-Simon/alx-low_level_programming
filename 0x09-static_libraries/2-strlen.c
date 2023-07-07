#include "main.h"
/**
 *_strlen - counts length of string
 *@s: string to be checked
 *Return: x
 */
int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}
	return (x);
}
