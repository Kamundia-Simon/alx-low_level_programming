#include "main.h"
#include <stdlib.h>

/**
  *word_len - locate end of first word
  *@str: string
  *Return: index marking end of first eord pointed
  */
int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
  *count_words - count number of words in a string
  *@str: string
  *Return: number of words in the string
  */
int count_words(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}
	return (words);
}

/**
  *strtow - split a string into two words
  *@str: string
  *Return: Null or pointer of array
  */
char **strtow(char *str)
{
	char **s;
	int i = 0, words, x, letters, y;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < words; x++)
	{
		while (str[i] == ' ')
			i++;
		letters = word_len(str + i);
		s[x] = malloc(sizeof(char) * (letters + 1));
		if (s[x] == NULL)
		{
			for (; x >= 0; x--)
				free(s[x]);
			free(s);
			return (NULL);
		}
		for (y = 0; y < letters; y++)
			s[x][y] = str[i++];
		s[x][y] = '\0';
	}
	s[x] = NULL;
	return (s);
}
