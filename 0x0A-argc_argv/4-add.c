#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *main- Entry point
  *@argc: number of arguments
  *@argv: array of pointers to arguments
*Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *a;

	while (--argc)
	{
		for (a = argv[argc]; *a; a++)
			if (*a < '0' || *a > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
