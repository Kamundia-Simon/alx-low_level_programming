#include <stdio.h>
#include "main.h"
/**
  *main - Entry Point
  *@argc: no of arguments
  *@argv: array of pointers to argument
  *Return: 0
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
