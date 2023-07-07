#include "main.h"
/**
 *_strstr - locate a substring
 *@haystack: string to check
 *@needle: substring
 *Return: returns a pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *m = needle;

		while (*n == *m && *m != '\0')
		{
			n++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
