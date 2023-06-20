#include "main.h"
/**
 *void - Entry point
 * descrption- print all alphabet in lowercase
 *return: 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
