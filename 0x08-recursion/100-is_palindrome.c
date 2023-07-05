#include "main.h"
/**
 *_strlen_recursion - returns length of string
 *@s: string
 *Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}

/**
  *_palindrome - check if a string is a palindrome
  *@s: string to check
  *@length: length of string
  *@i: position of string
  *Return: 1 or 0
  */
int _palindrome(char *s, int length, int i)
{
	if (s[i] == s[length / 2])
		return (1);
	if (s[i] == s[length - i - 1])
		return (_palindrome(s, length, i + 1));
	return (0);
}

/**
  *is_palindrome - checks palindrome
  *@s:string to check
  *Return: 1 or 0
  */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s);

	if (!(*s))
		return (1);
	return (_palindrome(s, length, i));
}
