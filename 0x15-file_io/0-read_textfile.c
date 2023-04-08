/*
 * File: 0-read_textfile.c
 * Alex reid
 */
#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file to be pointed
 * @letters: the number of letters to be read and print
 * Return: if success 2 fail 0
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *print_field;
	int file, read_file;

	if (!filename)
		return (0);

	/*Create buffer print_field*/
	print_field = malloc(letters * sizeof(char));
	if (print_field == NULL)
		return (0);

	/*Open file*/
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	/*Read file and save in buffer*/
	read_file = read(file, print_field, letters);
	/*Write standard output*/
	write(STDOUT_FILENO, print_field, read_file);

	close(file);
	free(print_field);
	return (read_file);
}
