#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define _SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or the corresponding exit code on failure.
 */
int main(int argc, char *argv[])
{
	int x, y;
	ssize_t rd, written;
	char buffer[_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	y = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(x);
		return (99);
	}

	while ((rd = read(x, buffer, _SIZE)) > 0)
	{
		written = write(y, buffer, rd);
		if (written == -1 || written != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(x);
			close(y);
			return (99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(x);
		close(y);
		return (98);
	}

	if (close(x) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		return (100);
	}

	if (close(y) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", y);
		return (100);
	}

	return (0);
}
