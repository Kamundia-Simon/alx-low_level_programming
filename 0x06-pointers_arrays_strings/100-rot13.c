#include "main.h"
/**
 *rot13 - encoder rot13
 *@s: pointer to string
 *Return: s
 */
char *rot13(char *s)
{
	int a, b;
	char *reg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(reg + b) != '\0'; b++)
		{
			if (*(s + a) == *(reg + b))
			{
				*(s + a) = *(rot + b);
				break;
			}
		}
	}
	return (s);
}
