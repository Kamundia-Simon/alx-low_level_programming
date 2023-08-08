#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	ssize_t written;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	if (x == -1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(x, text_content, len);
		if (written == -1 || (size_t)written != len)
		{
			close(x);
			return (-1);
		}
	}

	close(x);
	return (1);
}
