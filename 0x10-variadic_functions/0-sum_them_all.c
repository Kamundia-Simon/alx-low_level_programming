#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - calculate sum of all parametres
  *@n:number of parametres passed
  *@...: a variable number of parametres
  *Return: 0
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
