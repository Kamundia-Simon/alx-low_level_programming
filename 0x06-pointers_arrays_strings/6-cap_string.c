#include "main.h"
/**
 *cap_string - capitalise every character in string
 *@z: rep string
 *Return: char
 */
char *cap_string(char *z)
{
	int a = 0, i;
	int x = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (z[a])
	{
		i = 0;

		while (i < x)
		{
			if ((a == 0 || z[a - 1] == spc[i]) && (z[a] >= 97 && z[a] <= 122))
				z[a] -= 32;

			i++;
		}

		a++;
	}

	return (z);
}

