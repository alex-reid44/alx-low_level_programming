#include "main.h"
/**
 * read_textfile - reads text file and prints
 * @filename: file to be readed
 * @letters: number of letters to read and print
 * Return: on success 2, on failure 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *print_f;
	int file, read_f;

	if (!filename)
		return (0);

	/*Create buffer print_field*/
	print_f = malloc(letters * sizeof(char));
	if (print_f == 0)
		return (0);

	/*Open file*/
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	/*Read file and save in buffer*/
	read_f = read(file, print_f, letters);
	/*Write as standard output*/
	write(STDOUT_FILENO, print_f, read_f);

	close(file);
	free(print_f);
	return (read_f);
}
