#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *_buffer(char *f);
void _close(int n);

/**
 *_buffer - allocates 1024 byte buffer
 *@f: name of file
 *Return: pointer
 */

char *_buffer(char *f)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", f);
		exit(99);
	}

	return (buffer);
}

/**
 *_close - close file descriptors
 *@n: descriptor
 */

void _close(int n)
{
	int x;

	x = close(n);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
		exit(100);
	}
}

/**
 *main - copie the contebt of a file to another
 *@argc: number of arguments
 *@argv: array of pointers
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int m, t, o, p;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = _buffer(argv[2]);
	m = open(argv[1], O_RDONLY);
	o = read(m, buffer, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (m == -1 || o == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		p = write(t, buffer, o);
		if (t == -1 || p == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		o = read(m, buffer, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (o > 0);

	free(buffer);
	_close(m);
	_close(t);

	return (0);
}
