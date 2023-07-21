#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - returns all arguments
 * @format: specifies the necessary operations
 */

void print_all(const char * const format, ...)
{
	int i;
	int num;
	char *str;
	va_list arg;

	va_start(arg, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				num = 0;
				break;
			case 'i':
				printf("%i", va_arg(arg, int));
				num = 0;
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				num = 0;
				break;
			case 's':
				str = va_arg(arg, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				num = 0;
				break;
			default:
				num = 1;
				break;
		}
		if (format[i + 1] != '\0' && num == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
