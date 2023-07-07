#include <stdio.h>
#include "main.h"
/**
  *main - entry point
  *@argc: number of arguments
  *@argv: array pointers to argument
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);
	return (0);
}
