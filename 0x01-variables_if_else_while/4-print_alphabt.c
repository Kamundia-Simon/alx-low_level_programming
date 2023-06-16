#include <stdio.h>
/**
  *main - Entry point
  *description - prints all alphabets except e and
  *Return: 0 (success)
  */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a == 101 || a == 113)
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
