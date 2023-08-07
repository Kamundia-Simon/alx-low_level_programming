#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * create_file - Create a function that creates a file.
 * @filename: file to create.
 * @text_content: content to write
 *
 * Return: 1/-1
 */
int create_file(const char *filename, char *text_content)
{
	int x;

	ssize_t status;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (x == -1)
		return (-1);

	if (text_content != NULL)
	{
		status = write(x, text_content, strlen(text_content));
		if (status == -1)
		{
			close(x);
			return (-1);
		}
	}

	close(x);
	return (1);
}
