#include "main.h"
/**
 * _puts - prnts a string followed by anew line to stdout
 *@str: string to be input
 *Retrun: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
