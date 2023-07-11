#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *argstostr - concatenates all arguments of your program
 *@ac: number of arguments passed
 *@av: array of pointers
 *Return: Null or pointer
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int cnt = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			cnt++;
			b++;
		}
		a++;
	}
	cnt = cnt + ac + 1;
	str = malloc(sizeof(char) * cnt);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
