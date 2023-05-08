#include "main.h"
#include <stdio.h>
/**
 * main - copy file to another
 * @argc: argument counter
 * @argv: argument vector
 * Return: on success 2, failure 0
 */
int main(int argc, char **argv)
{
	int file_f, file_t;
	unsigned long int s;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_f file_t\n");
		exit(97);
	}
	file_f = open(argv[1], O_RDONLY);
	if (file_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}
	file_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	buffer = malloc(1024);
	while ((s = read(file_f, buffer, sizeof(buffer))) != 0)
		write(file_t, buffer, s);
	if (close(file_f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(99);
	}
	if (close(file_t) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_t);
		exit(99);
	}
	free(buffer);
	return (0);
}
