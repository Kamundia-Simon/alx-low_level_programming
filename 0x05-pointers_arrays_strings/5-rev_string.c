#include "main.h"
/**
  * rev_string - reverses a string
  *@s: string to be reversed
  */
void rev_string(char *s)
{
	char i = s[0];
	int y = 0;
	int a;

	while (s[y] != '\0')
		y++;
	for (a = 0; a < y; a++)
	{
		y--;
		i = s[a];
		s[a] = s[y];
		s[y] = i;
	}
}
