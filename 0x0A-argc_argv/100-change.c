#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: no of arguments
 * @argv: array of pointers to arguments
 * Return:  0.
 */
int main(int argc, char *argv[])
{
	int a, b, c = 0, Coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
		return (printf("Error\n"), 1);
	b = atoi(argv[1]);
	if (b < 0)
		return (puts("0"), 1);
	for (a = 0; a < 5; a++)
		if (b / Coins[a])
		{
			c += b / Coins[a];
			b %= Coins[a];
		}
	printf("%d\n", c);
	return (0);
}
