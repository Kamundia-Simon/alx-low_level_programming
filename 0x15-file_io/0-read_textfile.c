#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
  *read_textfile -  reads a text file and prints it to the POSIX stdout
  *@filename: name of file to read
  *@letters: numbers of letters to read and print
  *Return: 0/ letters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	char *buffer;
	ssize_t rd;
	ssize_t written;

	if (filename == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(x);
		return (0);
	}

	rd = read(x, buffer, letters);
	if (rd == -1)
	{
		close(x);
		free(buffer);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, rd);
	if (written == -1 || written != rd)
	{
		close(x);
		free(buffer);
		return (0);
	}

	close(x);
	free(buffer);

	return (written);
}

